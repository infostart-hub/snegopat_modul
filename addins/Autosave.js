//engine: JScript
//uname: Autosave
//dname: Автосохранение
//author: Синиченко Александр <sinichenko@yandex.ru>
//descr: При изменении текста модуля, сохраняет текст в файл и позволяет восстанавливить этот текст в случае падения платформы.
//help: inplace
//addin: global
//addin: stdlib
//addin: stdcommands

stdlib.require("TextWindow.js", SelfScript);
stdlib.require("SettingsManagement.js", SelfScript);

global.connectGlobals(SelfScript);

var ФормаНастроек;

var ИмяКаталогаБазы = "";
var КаталогСохранения = "";
var cfgName = metadata.current.rootObject;
var lastText = "";
var timerId = null;
var TxtDoc = v8New("ТекстовыйДокумент");
var currentModule = null;

// Настроки сохранения модулей определяем одни для всех баз
var settings = SettingsManagement.CreateManager('Autosave', { 'КаталогСохранения': '', 'ИнтервалСохранения': 500 });

// Инициализация
settings.LoadSettings();
init();

function init(){
	
	var строкаИБ = СтрокаСоединенияИнформационнойБазы();
	if (СтрНайти(строкаИБ.toLowerCase(), "file") > 0){
		var Путь = НСтр(строкаИБ, "File");
		var МассивСтрок = СтрРазделить(Путь, "\\");
		ИмяКаталогаБазы = МассивСтрок.Получить(МассивСтрок.Количество()-1);
	} else {
		var МассивСтрок = СтрРазделить(НСтр(строкаИБ, "Srvr"), ":");
		var ИмяСервера = МассивСтрок.Получить(0);
		var ИмяБазы = НСтр(строкаИБ, "Ref");
		ИмяКаталогаБазы = ИмяСервера + "_" + ИмяБазы;
	}
	
	if (settings.current.КаталогСохранения == ''){
		Сообщить("Не заданы настройки автосохранения! Необходимо произвести настройку перед началом работы.");
		openFormSettings();
	} else {
		КаталогСохранения = settings.current.КаталогСохранения + "\\" + ИмяКаталогаБазы + "\\";
		var НайденныеФайлы = НайтиФайлы(КаталогСохранения, "*", true);
		
		// Было падение, остались сохраненные файлы
		if (НайденныеФайлы.Количество() > 1) {
			
			var now = new Date();
			var formatedDate = now.getDate() + "-" + now.getMonth() + "-" + now.getFullYear() + "_" + now.getHours() + "-" + now.getMinutes() + "-" + now.getSeconds();
			var fs = new ActiveXObject("Scripting.FileSystemObject");
			var КаталогОбъект = fs.GetFolder(КаталогСохранения);
			try{
				КаталогОбъект.Name = ИмяКаталогаБазы + "_bkp_" + formatedDate;
			} catch (e) {
				Сообщить("Не удалось переимновать каталог сохранения в резервный, возможно он уже открыт! Работа автосохранения приостановлена чтобы не потерять данные.");
				Сообщить("Для возобновления работы автосохранения, откройте форму настроек Автосохранения и нажмите ОК, перезагрузите скрипт или перезапустите конфигуратор.");
				return;
			}
			ЗапуститьПриложение(settings.current.КаталогСохранения + "\\" + КаталогОбъект.Name);
			Сообщить("Найдены резервные файлы предыдущей несохраненной сессии! Каталог с резервными файлами был открыт!");
		}
		
		try{
			СоздатьКаталог(КаталогСохранения);
			СоздатьКаталог(КаталогСохранения + "Прочее");
		} catch (e) {
			Сообщить("Не корректно заданы настройки автосохранения! Необходимо произвести настройку перед началом работы.");
			openFormSettings();
			return;
		}
		
		events.connect(metadata, "MetaDataEvent", SelfScript.self, "OnMetaDataEvent");
		timerId = createTimer(settings.current.ИнтервалСохранения, SelfScript.self, "AutoSaveModule");
	}
}

stdlib.createMacros(SelfScript.self, "Открыть каталог сохранения", "Открывает каталог с сохраненными модулями", stdcommands.Frame.FileOpen.info.picture, function(){
    
	if (settings.current.КаталогСохранения == ''){
		return;
	}
	
	ЗапуститьПриложение(КаталогСохранения);
		
});

stdlib.createMacros(SelfScript.self, "Настройка", "Открывает форму с настройками скрипта", stdcommands.CfgStore.OpenCfgStoreAdmin.info.picture, function(){
    
	openFormSettings();
	
});

// События
function OnMetaDataEvent(mdp) {
	
	// Сохранение
	if (mdp.kind == 6 || mdp.kind == 5) {
		if (mdp.obj.container == metadata.current){
			// Сохранили конфигурацию
			var НайденныеФайлы = НайтиФайлы(КаталогСохранения, "*");
			
			for(var i = 0; i < НайденныеФайлы.Количество(); i++){
				var Файл = НайденныеФайлы.Получить(i);
				if (!Файл.ЭтоКаталог()) {
					УдалитьФайлы(НайденныеФайлы.Получить(i).ПолноеИмя);
				}
			}
		} else {
			// Сохранили что-то еще
			//var ИмяОбъекта = mdp.container.rootObject.name + "_" + txtWindow.textWindow.mdProp.name(1);
			var fileName = mdp.container.rootObject.name + "_";
			var НайденныеФайлы = НайтиФайлы(КаталогСохранения, "Прочее\\" + fileName + "*");
			
			for(var i = 0; i < НайденныеФайлы.Количество(); i++){
				var Файл = НайденныеФайлы.Получить(i);
				if (!Файл.ЭтоКаталог()) {
					УдалитьФайлы(НайденныеФайлы.Получить(i).ПолноеИмя);
				}
			}
		}
		
	}
	
}

// Прочее
function loadForm(){
    
	if (!ФормаНастроек)
        ФормаНастроек = loadScriptFormEpf(SelfScript.fullPath.replace(/js$/i, "epf"), "Настройка", SelfScript.self);
	
}

function openFormSettings(){
    
	loadForm();
    ФормаНастроек.Open();
	
}

function ПриОткрытии(){
	
	ФормаНастроек.КаталогСохранения = settings.current.КаталогСохранения;
	ФормаНастроек.ИнтервалСохранения = settings.current.ИнтервалСохранения;
	
}

function КаталогСохраненияНачалоВыбора(Элемент, СтандартнаяОбработка){
	
	var ВыборКаталога = v8New("FileDialog", РежимДиалогаВыбораФайла.ВыборКаталога);
    ВыборКаталога.Каталог = ФормаНастроек.КаталогСохранения;
    ВыборКаталога.Заголовок = "Укажите расположение каталога сохранения модулей";
    if (!ВыборКаталога.Выбрать())
		return;
    
	ФормаНастроек.КаталогСохранения = ВыборКаталога.Каталог;
}
	
function КнопкаОК(Кнопка){
	
	settings.current.КаталогСохранения = ФормаНастроек.КаталогСохранения;
	settings.current.ИнтервалСохранения = ФормаНастроек.ИнтервалСохранения;
	settings.SaveSettings();
	
	if(timerId){
		killTimer(timerId);
	}
	
	КаталогСохранения = settings.current.КаталогСохранения + "\\" + ИмяКаталогаБазы + "\\";
	СоздатьКаталог(КаталогСохранения);
	СоздатьКаталог(КаталогСохранения + "Прочее");
	
	
	if (settings.current.КаталогСохранения != '' && settings.current.ИнтервалСохранения > 0){
		timerId = createTimer(settings.current.ИнтервалСохранения, SelfScript.self, "AutoSaveModule");
	}
	ФормаНастроек.Закрыть();
}

function AutoSaveModule(){
	
	txtWindow = GetTextWindow();
	if (!txtWindow || txtWindow.textWindow.readOnly || !txtWindow.textWindow.mdCont || !txtWindow.textWindow.mdCont.isModified || lastText == txtWindow.textWindow.text){
		return;
	}
	
	if (lastText == ""){
		lastText = txtWindow.textWindow.text;
		return;
	}
	
	lastText = txtWindow.textWindow.text;
	
	// Это объект конфигурации
	if (txtWindow.textWindow.mdObj.container == metadata.current){
		var metadataName = txtWindow._view.title;
		metadataName = replaceAll(metadataName, " ", "_");
		metadataName = replaceAll(metadataName, ":", "_");
		var fileName = КаталогСохранения + metadataName + ".txt";
	} 
	// Что-то еще
	else {
		var Файл = v8New("Файл", txtWindow.textWindow.mdCont.identifier);
		if(!Файл.Существует())
			var ИмяОбъекта = txtWindow.textWindow.mdCont.rootObject.name + "_" + txtWindow.textWindow.mdProp.name(1);
		else
			var ИмяОбъекта = Файл.Имя;
			
		var fileName = КаталогСохранения + "Прочее\\" + replaceAll(ИмяОбъекта, ".", "_") + ".txt";
	}
	
	try{
        TxtDoc.УстановитьТекст(lastText);
		TxtDoc.Записать(fileName);
    } catch (e) {
        Сообщить("Не удалось сохранить резервную копию модуля, возможно отсутствуют права на запись в каталог резервных копий!");
    }
}

function escapeRegExp(string) {
	return string.replace(/[.*+\-?^${}()|[\]\\]/g, '\\$&');
}

function replaceAll(str, find, replace) {
	return str.replace(new RegExp(escapeRegExp(find), 'g'), replace);
}

// "Заготовка" на будущее
//events.connect(Designer, "onChangeTextManager", SelfScript.Self);
/*
function onChangeTextManager(p1, p2, p3){
	
	// TODO: Сюда переедет функция AutoSaveModule() после того как починят работу initTextAreaModifiedTraps()
	// и он перестанет ронять снегопат при удалении символов #
	
}
*/
