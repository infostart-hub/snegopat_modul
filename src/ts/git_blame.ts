//engine: JScript
//uname: git_blame
//dname: Показ git blame
//descr: Скрипт показывает git blame для текущего окна
//author: orefkov
//help: inplace
//addin: global

/// <reference path="./snegopat.d.ts" />
/// <reference path="./v8.d.ts" />
/*@
@*/
import * as stdlib from "./std/std";
import * as stdcommands from "./std/commands";

function getPathToRepo() {
    return 'e:\\base_files\\';
}

function macrosПоказатьBlame() {
    var wnd = snegopat.activeTextWindow();
    if (!wnd) {
        MessageBox("Нет активного окна");
        return;
    }
    if (!wnd.mdObj || !wnd.mdProp) {
        MessageBox("Это не окно модуля метаданных");
        return;
    }
    debugger
}

/*
function runAnalyses(td: TextDocument) {
    try {
        var tmpPath = GetTempFileName() + "\\";
        CreateDirectory(tmpPath);
        var fPath = tmpPath + "text.bsl";
        td.Write(fPath);
        if (!v8New("File", fPath).Существует()) {
            MessageBox("Не удалось записать текст модуля во временный файл");
            return undefined;
        }
        var wsh = new ActiveXObject("Wscript.Shell");
        // todo - разобраться с путями с пробелами
        var cmd = '"' + pathToServer + '" -a -s ' + tmpPath + ' -o ' + tmpPath +  ' -r json';
        //Message(cmd);
        wsh.Run(cmd, 1, 1);
        fPath = tmpPath + "bsl-json.json";
        if (!v8New("File", fPath).Существует()) {
            MessageBox("Файл с результатом работы не найден");
            DeleteFiles(tmpPath);
            return undefined;
        }
        td = v8New("TextDocument");
        td.Read(fPath, TextEncoding.UTF8);
        DeleteFiles(tmpPath);
        return JSON.parse(td.GetText());
    } catch(e) {
        Message(e.description);
    }
    return undefined;
}
*/
var form;
function loadForm() {
    if (!form)
        form = loadScriptFormEpf(SelfScript.fullPath.replace(/js$/i, "epf"), "Форма", SelfScript.self);
}

function fillForm() {
    loadForm();
}

function openForm() {
    loadForm();
    form.Open();
}
