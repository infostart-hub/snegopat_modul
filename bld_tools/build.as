/*
* Вспомогательный скрипт для построения списка скриптов и справки при сборке модуля.
* Основная работа делается на JScript, но так как нужно ещё и работать с sqlite,
* задействуем Core.As.
*/
#pragma once
#include "../all.h"

bool isFileExist(const string& filePath) {
    return (GetFileAttributes(filePath.cstr) & FILE_ATTRIBUTE_DIRECTORY) == 0;
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

void fromUtf8(int_ptr buffer, uint size, string& result) {
    if ((mem::dword[buffer] & 0xFFFFFF) == 0xBFBBEF) {
        buffer += 3;
        size -= 3;
    }
    uint len = MultiByteToWideChar(CP_UTF8, 0, buffer, size, 0, 0);
    int_ptr ptr = result.setLength(len);
    MultiByteToWideChar(CP_UTF8, 0, buffer, size, ptr, len + 1);
}

string readTextFile(const string& path) {
    string result;
    HANDLE hFile = CreateFile(path.cstr, GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, 0, 0);
    if (INVALID_HANDLE_VALUE != hFile) {
        int_ptr size = GetFileSize(hFile, 0);
        if (size > 0) {
            int_ptr buffer = mem::malloc(size);
            ReadFile(hFile, buffer, size, 0, 0);
            fromUtf8(buffer, size, result);
            mem::free(buffer);
        }
        CloseHandle(hFile);
    }
    return result;
}

int main(array<string>&& cmdArgs) {
	Print("Строим список скриптов...");
    auto files = findFiles("addins\\", "*.js");

    return 0;
}
