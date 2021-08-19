//engine: JScript
//uname: configCaption 
//dname: Заголовок окна Конфигуратора
//descr: Изменение заголовка окна Конфигуратора на более полезное
//author: orefkov, artbear
//help: inplace
//www: https://snegopat.ru/scripts/wiki?name=configCaption.js
//addin: global
exports.__esModule = true;
/// <reference path="./snegopat.d.ts"/>
/// <reference path="./v8.d.ts"/>
/*@
Это скрипт, позволящий заменять заголовок окна Конфигуратора на более информативный.
После подключения скрипта вы сможете настроить заголовок на свой вкус, выводя в нём информацию
о редактируемой базе данных, релизе 1С и т.п.
@*/
global.connectGlobals(SelfScript);
var stdlib = require("./std/std");
var captionExprPath = "ConfigCaption/Expression";
profileRoot.createValue(captionExprPath, 'ibName() + $(metaDataVersion(), " (", ")") + " / " + cnnString() + " / " + mainTitleShort +  $(additionalTitle, " - [", "]")', pflSnegopat);
var captionExpr = profileRoot.getValue(captionExprPath);
var form;
var sVersion = env.sVersion;
var v8Version = env.v8Version;
var arch = env.arch;
var debugTitle = "*** ОТЛАДКА Снегопат *** ";

events.connect(windows, "onChangeTitles", SelfScript.self);
function setCaption(mainTitle, additionalTitle) {
    var mainTitleShort = mainTitle.replace(/^Конфигуратор - /, "");
    windows.caption = eval(captionExpr);
    
    // Временное решение, после одобрения PR и пересборки в новый релиз snegopat_modul/src/ts/std/std.ts нужно переписать на
	// if (stdlib.isDebug) или Александр добавит env.isDebug в api.h в класс as_env после чего можно будет
    // переписать на if (env.isDebug) и убрать не нужный код проверяющий coreas-tracefunctions в modul/src/ts/std/std.ts если был одобрен его PR
	if (profileRoot.getValue("CmdLine/OriginalCmdLine").toLowerCase().indexOf("-coreas-tracefunctions 1") > 0)
	{
		windows.caption = debugTitle + eval(captionExpr);
	}
}
function ibName() {
    return stdlib.ibName();
}
function metaDataVersion() {
    return metadata.current.rootObject.property("Версия");
}
function cnnString() {
    return НСтр(СтрокаСоединенияИнформационнойБазы(), "File") || НСтр(СтрокаСоединенияИнформационнойБазы(), "Srvr") + ":" + НСтр(СтрокаСоединенияИнформационнойБазы(), "Ref");
}
function $(str, prefix, suffix, repl) {
    if (arguments.length < 4)
        repl = '';
    if (arguments.length < 3)
        suffix = '';
    if (arguments.length < 2)
        prefix = '';
    return str.length ? prefix + str + suffix : repl;
}
function onChangeTitles(param) {
    setCaption(param.mainTitle, param.additionalTitle);
    param.cancel = true;
}
setCaption(windows.mainTitle, windows.additionalTitle);
function macrosПоказатьНаименованиеБазы() {
    Message("имя текущей базы = <" + ПолучитьНаименованиеБазы() + ">");
}
function ПолучитьНаименованиеБазы() {
    return profileRoot.getValue("CmdLine/IBName").replace(/^\s*|\s*$/g, '');
}
function macrosПоказатьНаименованиеБазыПоПутиКНей() {
    var baseName = stdlib.ПолучитьНаименованиеБазы1CИзФайлаЗапуска(СтрокаСоединенияИнформационнойБазы());
    Message("имя текущей базы = <" + baseName + ">");
}
function macrosПоказатьСтрокуСоединенияИБ() {
    Message(НСтр(СтрокаСоединенияИнформационнойБазы(), "File") || НСтр(СтрокаСоединенияИнформационнойБазы(), "Srvr") + ":" + НСтр(СтрокаСоединенияИнформационнойБазы(), "Ref"));
}
/*@
## Макрос Настройка
Макрос вызывает диалог для настройки состава отображаемой в заголовке Конфигуратора информации.
Настройка заключается в вводе выражения на языке JavaScript, которое будет вычислятся при изменениях
заголовка Конфигуратора. Результат вычисления этого выражения и будет отображён как заголовок основного окна.

В выражении можно использовать следующие переменные и функции:
- mainTitle - штатный основной заголовок
- mainTitleShort - штатный основной заголовок без слова Конфигуратор
- additionalTitle - дополнительный заголовок
- ibName() - имя базы данных
- metaDataVersion() - свойство "Версия" метаданных
- cnnString() - данные из строки соединения
- sVersion - версия Снегопата
- v8Version - релиз 1С
- arch - разрядность платформы x32\x64
- Функция $(Строка, Префикс, Суффикс, ВместоПустой) - вывести Префикс + Строка + Суффикс если Строка не пустая, иначе вывести ВместоПустой
@*/
function macrosНастройка() {
    form = loadFormForScript(SelfScript);
    form.Выражение = captionExpr;
    form.ЭлементыФормы.Помощь.Заголовок = "Можно использовать:\n" +
        "mainTitle - основной заголовок\n" +
        "mainTitleShort - основной заголовок без слова Конфигуратор\n" +
        "additionalTitle - дополнительный заголовок\n" +
        "ibName() - имя базы данных\n" +
        "metaDataVersion() - свойство \"Версия\" метаданных\n" +
        "cnnString() - данные из строки соединения\n" +
        "sVersion - версия Снегопата\n" +
        "v8Version - релиз 1С\n" +
        "arch - разрядность платформы x32\\x64\n" +
        "Функция $(Строка, Префикс, Суффикс, ВместоПустой) - вывести Префикс + Строка + Суффикс если Строка не пустая, иначе вывести ВместоПустой\n";
    if (form.ОткрытьМодально()) {
        captionExpr = form.Выражение;
        profileRoot.setValue(captionExprPath, captionExpr);
        setCaption(windows.mainTitle, windows.additionalTitle);
    }
    form = null;
}
/* Возвращает название макроса по умолчанию - вызывается, когда пользователь
дважды щелкает мышью по названию скрипта в окне Снегопата. */
function getDefaultMacros() {
    return 'Настройка';
}
function КоманднаяПанель1Проверить(Кнопка) {
    var mainTitle = windows.mainTitle, additionalTitle = windows.additionalTitle;
    var mainTitleShort = mainTitle.replace(/^Конфигуратор - /, "");
    MessageBox(eval(form.Выражение));
}
function КоманднаяПанель1ОК(Кнопка) {
    form.Закрыть(true);
}
