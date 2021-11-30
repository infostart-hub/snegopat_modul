/*
 * (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
 * Вспомогательный скрипт для построения списка скриптов и справки при сборке модуля.
 * Основная работа делается на JScript, но так как нужно ещё и работать с sqlite,
 * задействуем Core.As.
 */

// Данные строки нужны только для среды разработки и вырезаются препроцессором
#pragma once
#include "../all.h"

/*
 * Объект этого класса будет добавлен в запускаемый build.js как глобальный, предоставляя
 * свои методы как небольшой API
 */

class ScriptApi {
    bool isFileExist(const string& filePath) {
        return (GetFileAttributes(filePath.cstr) & FILE_ATTRIBUTE_DIRECTORY) == 0;
    }

    bool isDirectory(const string& path) {
        DWORD res = GetFileAttributes(path.cstr);
        return res != DWORD(-1) && (res & FILE_ATTRIBUTE_DIRECTORY) != 0;
    }

    bool createDirectory(const string& fullPath) {
        auto folders = fullPath.split("\\");
        string path;
        for (uint i = 0; i < folders.length; i++) {
            if (folders[i].isEmpty())
                continue;
            path += folders[i] + "\\";
            if (!isDirectory(path)) {
                CreateDirectory(path.cstr);
                if (!isDirectory(path))
                    return false;
            }
        }
        return true;
    }

    array<string>&& findFiles(const string& path, const string& mask) {
        array<string> result;
        string pattern = path + mask;
        WIN32_FIND_DATA fnd;
        HANDLE hFnd = FindFirstFile(pattern.cstr, fnd.self);
        if (INVALID_HANDLE_VALUE != hFnd) {
            do {
                result.insertLast(stringFromAddress(fnd.self + WIN32_FIND_DATA_cFileName_offset));
            } while (FindNextFile(hFnd, fnd.self) != 0);
            FindClose(hFnd);
        }
        return result;
    }

    string readUtf8File(const string& path) {
        string result;
        HANDLE hFile = CreateFile(path.cstr, GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, 0, 0);
        if (INVALID_HANDLE_VALUE != hFile) {
            int_ptr size = GetFileSize(hFile, 0);
            if (size > 0) {
                int_ptr buffer = mem::malloc(size);
                ReadFile(hFile, buffer, size);
                fromUtf8(buffer, size, result);
                mem::free(buffer);
            }
            CloseHandle(hFile);
        }
        return result;
    }

    void writeUtf8File(const string& path, const string& text) {
        HANDLE hFile = CreateFile(path.cstr, GENERIC_WRITE, 0, 0, CREATE_ALWAYS, 0, 0);
        if (INVALID_HANDLE_VALUE != hFile) {
            uint prefix = 0xBFBBEF;
            WriteFile(hFile, mem::addressOf(prefix), 3);
            utf8string utext = text.toUtf8();
            WriteFile(hFile, utext.ptr, utext.length, 0, 0);
            CloseHandle(hFile);
        }
    }

    void print(const string& text) {
        Print(text);
    }

    SqliteBase&& sqliteOpen(const string& baseName = ":memory:", int flags = -1) {
        uint db = 0;
        if (flags == -1)
            flags = SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE;
        int res = sqlite3_open_v2(baseName.toUtf8().ptr, db, flags);
        if (SQLITE_OK == res) {
			Print("Открыли базу данных " + baseName);
            return SqliteBase(db);
		}
		Print("Ошибка открытия базы данных " + baseName + ": " + res);
		Print(stringFromAddress(sqlite3_errmsg16(db)));
        if (db != 0) {
			setComException(stringFromAddress(sqlite3_errmsg16(db)));
            sqlite3_close(db);
		}
        return null;
    }

    private void fromUtf8(int_ptr buffer, uint size, string& result) {
        if ((mem::dword[buffer] & 0xFFFFFF) == 0xBFBBEF) {
            buffer += 3;
            size -= 3;
        }
        uint len = MultiByteToWideChar(CP_UTF8, 0, buffer, size, 0, 0);
        int_ptr ptr = result.setLength(len);
        MultiByteToWideChar(CP_UTF8, 0, buffer, size, ptr, len + 1);
    }
};

class AddinScript : ScriptSite {
    bool hasErrors = false;
    AddinScript() {}
    ActiveScript&& _script() { return script; }
    // Вызывается при ошибке в скрипте
    bool onScriptError(const ScriptError& err) {
        hasErrors = true;
        Print("В скрипте произошла ошибка: " + err.description);
        return true;
    }
    // Вызывается при входе в выполнение скрипта
    void enter() {}
    // Вызывается при выходе из выполнения скрипта
    void leave() {}

    bool setText(const string& source, ScriptApi&& api) {
        if (0 != script.prepare("JScript", source, 0, "buildScript", true, this))
            return false;
        script.addNamedItem("ScriptApi", createDispatchFromAS(api), true);
        script.run();
        return true;
    }
    int invoke(const string& function) {
        Variant result;
        if (script.invokeMacros(function, result)) {
            if (result.vt != VT_I4)
                result.changeType(VT_I4);
            return int(result.dword);
        }
        hasErrors = true;
        Print("Не удалось выполнить макрос " + function);
        return 1;
    }

    protected ActiveScript script;
};

/*
* Минимальная реализация работы с sqlite для использования в скрипте сборки справки.
*/

// Класс обёртка для работы с базой данных sqlite
class SqliteBase {
    int_ptr _db;
    SqliteBase(int_ptr db) {
        _db = db;
    }
    int_ptr exec(const string& strQuery, bool answerIsID = false) {
        int_ptr res = 0;
        if (SQLITE_OK != sqlite3_exec(_db, strQuery.toUtf8().ptr))
            setComException("Ошибка в запросе: " + get_lastError());
        else
            res = answerIsID ? sqlite3_last_insert_rowid(_db) : int64(sqlite3_changes(_db));
        return res;
    }
    // Получить описание ошибки
    string get_lastError() {
        return stringFromAddress(sqlite3_errmsg16(_db));
    }
    // Закрыть базу данных
    void close() {
        sqlite3_close_v2(_db);
        _db = 0;
    }
    // Подготовить один запрос
    SqliteQuery&& prepare(const string& strQuery) {
        int_ptr pSqlText = strQuery.cstr;
        int_ptr pStmt;
        if (SQLITE_OK != sqlite3_prepare16_v2(_db, pSqlText, -1, pStmt, pSqlText)) {
            setComException(get_lastError());
            return null;
        }
        return SqliteQuery(pStmt);
    }
    // Возвращает количество строк, обработанных непосредственно последним запросом
    uint changes() {
        return sqlite3_changes(_db);
    }
    // Возвращает общее количество строк, обработанных при выполнении последнего запроса, учитывая различные триггеры
    uint totalChanges() {
        return sqlite3_total_changes(_db);
    }
    // Возвращает rowid последней добавленной строки
    uint64 lastInsertedID() {
        return sqlite3_last_insert_rowid(_db);
    }
};

class ResultRow {
    array<Variant>&& data() {
        return &&row;
    }
    Variant col(uint idx) {
        return row[idx];
    }
    array<Variant> row;
};

// Класс для выполнения подготовленного запроса
class SqliteQuery {
    int_ptr _stmt;
    SqliteQuery(int_ptr s) {
        _stmt = s;
    }
    // Установить параметр по имени или номеру
    SqliteQuery&& bind(Variant idx, Variant val = Variant()) {
        int idxOfParam = 0;
        if (idx.vt == VT_BSTR)
            idxOfParam = sqlite3_bind_parameter_index(_stmt, stringFromAddress(int_ptr(idx.qword)).toUtf8().ptr);
        else
            idxOfParam = idx.dword;
        if (idxOfParam <= 0 || idxOfParam > sqlite3_bind_parameter_count(_stmt)) {
            setComException("Неправильный индекс");
            return this;
        }
        int res;
        switch (val.vt) {
        case VT_EMPTY:
        case VT_ERROR:
            res = sqlite3_bind_null(_stmt, idxOfParam);
            break;
        case VT_BOOL:
            res = sqlite3_bind_int(_stmt, idxOfParam, int(val.dword) == VARIANT_TRUE ? 1 : 0);
            break;
        case VT_R8:
            res = sqlite3_bind_double(_stmt, idxOfParam, val.dreal);
            break;
        case VT_I1:
            res = sqlite3_bind_int64(_stmt, idxOfParam, val.byte);
            break;
        case VT_I2:
            res = sqlite3_bind_int64(_stmt, idxOfParam, val.word);
            break;
        case VT_I4:
            res = sqlite3_bind_int64(_stmt, idxOfParam, val.dword);
            break;
        case VT_I8:
            res = sqlite3_bind_int64(_stmt, idxOfParam, val.qword);
            break;
        case VT_BSTR:
            res = sqlite3_bind_text16(_stmt, idxOfParam, stringFromAddress(int_ptr(val.qword)).cstr, -1, SQLITE_TRANSIENT);
            break;
        }
        if (SQLITE_OK != res)
            setComException(stringFromAddress(sqlite3_errmsg16(sqlite3_db_handle(_stmt))));
        return this;
    }
    int_ptr exec(bool isAnswerID = false) {
        int res = sqlite3_step(_stmt);
        sqlite3_reset(_stmt);
        if (SQLITE_DONE != res)
            setComException(stringFromAddress(sqlite3_errmsg16(sqlite3_db_handle(_stmt))));
        int_ptr db = sqlite3_db_handle(_stmt);
        return isAnswerID ? sqlite3_last_insert_rowid(db) : int64(sqlite3_total_changes(db));
    }
    // Выполняет запрос и возвращает строку результата
    array<ResultRow&&>&& query() {
        uint cols = sqlite3_column_count(_stmt);
        if (cols > 0) {
            array<ResultRow&&> result;
            for (;;) {
                int res = sqlite3_step(_stmt);
                if (SQLITE_ROW == res) {
                    ResultRow row;
                    row.row.resize(cols);
                    for (uint i = 0; i < cols; i++) {
                        switch (sqlite3_column_type(_stmt, i)) {
                        case SQLITE_INTEGER:
                            row.row[i].vt = VT_I8;
                            row.row[i].qword = sqlite3_column_int64(_stmt, i);
                            break;
                        case SQLITE_FLOAT:
                            row.row[i].vt = VT_R8;
                            row.row[i].dreal = sqlite3_column_double(_stmt, i);
                            break;
                        case SQLITE_NULL:
                            break;
                        default:
                            row.row[i].vt = VT_BSTR;
                            row.row[i].qword = SysAllocString(sqlite3_column_text16(_stmt, i));
                            break;
                        }
                    }
                    result.insertLast(&&row);
                } else if (SQLITE_DONE == res) {
                    sqlite3_reset(_stmt);
                    return &&result;
                }
            }
        }
        sqlite3_reset(_stmt);
        return null;
    }
    void close() {
        sqlite3_finalize(_stmt);
        _stmt = 0;
    }
};

int main(array<string>&& cmdArgs) {
    ScriptApi sa;
    string scriptText = sa.readUtf8File("addins\\std\\build.js");
    initActiveScriptSubsystem(0, "SnegopatBuilder");
    AddinScript script, markdown;
    markdown.setText(sa.readUtf8File("..\\..\\..\\..\\bld_tools\\marked.js"), &&sa);
    int res;
    if (script.setText("var exports={};\n" + scriptText, &&sa)) {
        script._script().addNamedItem("markdown", &&markdown._script().getObject(), true);
        res = script.invoke("Build");
    }
    if (script.hasErrors) {
        Print("При выполнении скрипта сборки были ошибки.");
        return 1;
    }
    return res;
}
