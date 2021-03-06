//engine: JScript
//uname: bsl_analyze
//dname: Расширенный анализ модулей
//descr: Скрипт для взаимодействия с bsl language server
//category: Редактирование\Качество кода
//author: orefkov
//help: inplace
//autoload: 1
//addin: global

/// <reference path="./snegopat.d.ts" />
/// <reference path="./v8.d.ts" />
/*@
Данный скрипт осуществляет анализ текстов модулей с помощью bsl language server и выводит
результат диагностики в форму, позволяя быстро перейти к нужному месту.
@*/
import * as stdlib from "./std/std";
import * as stdcommands from "./std/commands";

type ResultTableRow = {НомерСтроки:number, Позиция: string, Важность: string, ВажностьЧисло:number, Сообщение: string } & ValueTableRow;
type ResultTable = { Get(p: number): ResultTableRow, Add(): ResultTableRow } & ValueTable;
type ResultFormControls = FormItems & {
    msgList : TableBox,
    ИмяМодуля: Надпись
};
type ResultForm = {Controls: ResultFormControls, msgList: ResultTable} & Form;

type SettingsForm = {PathToBsl: string} & Form;

global.connectGlobals(SelfScript);

// Метод вызывается при регистрации хоткеев аддина
function getPredefinedHotkeys(predef) {
    predef.setVersion(1);
    stdlib.getAllPredefHotKeys(SelfScript.self, predef);
}

var form: ResultForm;
var formSettings: SettingsForm;
var lastResult;
var parsedTextWindow : ITextWindow;
var mdCont : IV8MDContainer;
var mdObjId: string;
var mdPropId: string;
var filePath: string;
var lastView: IV8View;
var pathToServer;
var pflFolder = "Snegopat/bsl_analize/", pflPath = pflFolder + "pathToBsl";

function tryFindPathToBsl(p: string) {
    if (v8New("File", p).Существует()) {
        pathToServer = p;
        return true;
    }
    return false;
}

function storeSettings() {
    profileRoot.setValue(pflPath, pathToServer);
}

(function(){
    // Укажем, что сохранять эту настройку надо в файле настроек снегопата
    profileRoot.createValue(pflPath, "", pflSnegopat);
    pathToServer = profileRoot.getValue(pflPath);
    if (!pathToServer) {
        if (!tryFindPathToBsl("c:\\Program Files\\bsl-language-server\\bsl-language-server.exe"))
            tryFindPathToBsl("c:\\Program Files\\phoenixbsl\\app\\bsl-language-server\\bsl-language-server.exe");
        if (!!pathToServer)
            storeSettings();
    }
})();

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

function storeCurrentWindow(tw: ITextWindow) {
    lastView = windows.getActiveView();
    parsedTextWindow = tw;
    filePath = (<TextDocument>tw.textDocument).UsedFileName;
    if (tw.mdCont) {
        mdCont = tw.mdCont;
        mdObjId = tw.mdObj.id;
        mdPropId = tw.mdProp.id;
    } else {
        mdCont = null;
        mdObjId = '';
        mdPropId = '';
    }
}

function loadForm() {
    if (!form)
        form = loadScriptFormEpf(SelfScript.fullPath.replace(/js$/i, "epf"), "Форма", SelfScript.self);
}

function loadFormSettings() {
    if (!formSettings)
        formSettings = loadScriptFormEpf(SelfScript.fullPath.replace(/js$/i, "epf"), "Настройка", SelfScript.self);
}

function fillForm() {
    loadForm();
    form.msgList.Clear();
    form.Controls.ИмяМодуля.Caption = lastView.title;
    var diagList = lastResult["fileinfos"][0]["diagnostics"];
    for (var k in diagList) {
        var diag = diagList[k];
        var rn = diag.range;
        var row = form.msgList.Add();
        row.НомерСтроки = rn.start.line + 1;
        row.Позиция = `${rn.start.line+1}:${rn.start.character+1} - ${rn.end.line+1}:${rn.end.character+1}`;
        row.Важность = diag.severity;
        row.Сообщение = diag.message;
        row.ВажностьЧисло = GetSeverityNumber(diag.severity);
    }
    form.msgList.Сортировать("ВажностьЧисло Убыв");
}

function GetSeverityNumber(severity) {
    switch (severity) {
        case "Hint":
            return 0
        case "Information":
            return 10
        case "Warning":
            return 20
        case "Error":
            return 30
    
        default:
            break;
    }
    return 0;
}

function openForm() {
    loadForm();
    form.Open();
}

function openFormSettings() {
    loadFormSettings();
    formSettings.DoModal();
}

function SettingsOnOpen() {
    formSettings.PathToBsl = pathToServer;
}

function PathToBslНачалоВыбора(Элемент, СтандартнаяОбработка) {
    var sel = v8New("FileDialog");
    sel.Mode = FileDialogMode.Open;
    sel.Title = "Укажите расположение выполняемого файла bsl-language-server";
    if (sel.Choose())
        formSettings.PathToBsl = sel.FullFileName;
}

function CommandBarOpenReleases(Кнопка) {
    RunApp("https://github.com/1c-syntax/bsl-language-server/releases");
}

function CommandBarSaveClose(Кнопка) {
    pathToServer = formSettings.PathToBsl;
    storeSettings();
    formSettings.Close();
}
function CmdBarOpenSettings(Кнопка) {
    openFormSettings();
}

function activateLastTextView() {
    if (!parsedTextWindow || !parsedTextWindow.isAlive) {
        // Закрыли окно, попробуем восстановить
        if (mdObjId != '') {
            var mdObj = mdCont.findByUUID(mdObjId);
            if (!mdObjId) {
                MessageBox("Не удалось найти объект метаданных");
                return false;
            }
            parsedTextWindow = mdObj.openModule(mdPropId);
            if (!parsedTextWindow) {
                MessageBox("Не удалось открыть модуль метаданных");
                return false;
            }
        } else {
            if (filePath != '') {
                stdlib.openFileIn1C(filePath);
                var tw = snegopat.activeTextWindow();
                if (tw && tw.textDocument && (<TextDocument>tw.textDocument).UsedFileName == filePath)
                    parsedTextWindow = tw;
                else {
                    MessageBox("Не удалось открыть файл " + filePath);
                    return false;
                }
            } else {
                MessageBox("Неизвестно, какой файл открывать");
                return false;
            }
        }
        lastView = windows.getActiveView();
    } else {
        lastView.activate();
    }
    return true;
}

function msgListВыбор(Элемент, ВыбраннаяСтрока, Колонка, СтандартнаяОбработка) {
    if (!activateLastTextView())
        return;
    var range = /(\d+):(\d+) - (\d+):(\d+)/.exec(ВыбраннаяСтрока.val.Позиция);
    var startLine = parseInt(range[1]), startCol = parseInt(range[2]), endLine = parseInt(range[3]), endCol = parseInt(range[4])
    parsedTextWindow.setCaretPos(startLine, startCol);
    parsedTextWindow.setSelection(startLine, startCol, endLine, endCol);
}

stdlib.createMacros(SelfScript.self, "Расширеный анализ текущего модуля",
"Вызывает анализ текущего модуля с помощью bsl language server",
stdcommands.Frntend.SyntaxCheck.info.picture, function() {
    if (!pathToServer || !v8New("File", pathToServer).Существует()) {
        openFormSettings();
        return;
    }
    var tw = snegopat.activeTextWindow();
    if (!tw || tw.extName() != "Встроенный язык") {
        if (lastResult)
            openForm();
        else
            MessageBox("Нет активного модуля");
        return;
    }
    var result = runAnalyses(tw.textDocument);
    if (!result)
        return;
    storeCurrentWindow(tw);
    lastResult = result;
    fillForm();
    openForm();
}, "Ctrl+Shift+F7");

stdlib.createMacros(SelfScript.self, "Открыть форму", "Открывает форму с текущим анализом модуля",
    stdcommands.Frame.FileOpen.info.picture,
    function() {
        openForm();
    }
);


stdlib.createMacros(SelfScript.self, "Настройка", "Открывает форму с настройками скрипта",
    stdcommands.CfgStore.OpenCfgStoreAdmin.info.picture,
    function() {
        openFormSettings();
    }
);
