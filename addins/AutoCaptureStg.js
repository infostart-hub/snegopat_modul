//engine: JScript
//uname: AutoCaptureStg
//dname: Автозахват объектов в хранилище
//author:Александр Синиченко <sinichenko@yandex.ru>
//descr: Автоматический захват объектов метаданных в хранилище
//help: inplace
//addin: global
//addin: stdcommands
//addin: stdlib

stdlib.require("SettingsManagement.js", SelfScript);
global.connectGlobals(SelfScript);

var КонтейнерМетаданных = null;
var Форма = null
var settings = SettingsManagement.CreateManager('AutoCaptureStg', { 'МетаданныеДляЗахвата': '', 'ИнтервалОпроса': 0 });
var timerId = null;
var CaptureError = false;
var started = false;
var CaptureNow = false;
var ModalDialogOpened = false;

events.connect(windows, "onMessage", SelfScript.self)
events.connect(windows, "onMessageBox", SelfScript.self)
events.connect(windows, "onDoModal", SelfScript.self, "hookCaptureCfgStoreWindow")

// Перехват вывода в окно сообщений
function onMessage(params) {
    //refs.push(params.text)  // Запомним, что выводилось
    //params.cancel = true    // Не будем реально выводить
}

function onMessageBox(param) {
    
    if (param.text.indexOf("Ошибка выполнения операции захвата объектов в хранилище") >= 0) {
        CaptureError = true;
        param.result = mbaYes
        param.cancel = true
        return;
    }
}

// Захват объектов
function CaptureIntoCfgStore(mdObj) {
    
	if (!mdObj)
        return
    try {
        if (mdObj != metadata.current.rootObject)
            mdObj.activateInTree();

        CaptureError = false;
        res = stdcommands.CfgStore.CaptureIntoCfgStore.send() // true если успешно

        return res && !CaptureError
    } catch (e) {
        //Message("Ошибка : " + e.description)
        return false
    }
}

function CaptureObjectsInStg() {

	if (ModalDialogOpened)
		return;

    if (timerId) {
        killTimer(timerId);
        timerId = null;
    }
    
	CaptureNow = true;
	
	ОчиститьСообщения();
	
    масЗахваченных = v8New("Массив");
    сооUUID = ЗначениеИзСтрокиВнутр(settings.current.МетаданныеДляЗахвата);
    if (сооUUID.Количество() == 0)
	{
		if (timerId){
			killTimer(timerId);
			timerId = null;
		}
		
		Сообщить("Все объекты захвачены. Автозахват объектов остановлен...");
		started = false;
        return
	}
	
    for (var стрСоо = new Enumerator(сооUUID) ; !стрСоо.atEnd() ; стрСоо.moveNext()) {
        Строка = стрСоо.item();
        mdObj = metadata.current.findByUUID(Строка.Ключ);
        res = CaptureIntoCfgStore(mdObj)
        if (res) {
            масЗахваченных.Добавить(Строка.Ключ);
        }
    }
	
	CaptureNow = false;
	
    for (var стрСоо = new Enumerator(масЗахваченных) ; !стрСоо.atEnd() ; стрСоо.moveNext()) {
        Строка = стрСоо.item();
        сооUUID.Удалить(Строка);
    }

    settings.current.МетаданныеДляЗахвата = ЗначениеВСтрокуВнутр(сооUUID);
    settings.SaveSettings();
    saveProfile();

    if (started) {
        timerId = createTimer(settings.current.ИнтервалОпроса * 1000, SelfScript.self, "CaptureObjectsInStg");
    }
}

function hookCaptureCfgStoreWindow(dlgInfo) {
    
	
	if (!started)
		return
		
	if (dlgInfo.caption != "Захват объектов в хранилище конфигурации" && timerId) {
        killTimer(timerId);
        timerId = null;
    }
	
	if (dlgInfo.stage == 1)
		ModalDialogOpened = true;
	else
		ModalDialogOpened = false;
	
    if (dlgInfo.stage == 0 && dlgInfo.caption == "Захват объектов в хранилище конфигурации" && CaptureNow) {
        try {
            dlgInfo.form.getControl("GetRecursive").value = false;
            dlgInfo.cancel = true;
            dlgInfo.result = mbaOK;
        } catch (e) {}
    }

    if (started && dlgInfo.caption != "Захват объектов в хранилище конфигурации") {
        timerId = createTimer(settings.current.ИнтервалОпроса * 1000, SelfScript.self, "CaptureObjectsInStg");
    }
}

// Конец захват объектов

SelfScript.self['macrosНачать автозахват объектов'] = function () {
    
	if (timerId)
		KillTimer(timerId);
	
    if (settings.current.ИнтервалОпроса == 0)
        return
    
    started = true;
    CaptureObjectsInStg();
    
};

SelfScript.self['macrosОстановить автозахват объектов'] = function () {
    if (!timerId)
        return

    started = false;
    killTimer(timerId);
    timerId = null;
};

SelfScript.self['macrosНастройка'] = function () {

    Форма = loadScriptFormEpf(SelfScript.fullPath.replace(/js$/i, "epf"), "Настройка", SelfScript.self);
    Форма.DoModal();
    Форма = null;
};

function getDefaultMacros() {
    return "Настройка";
}

//{ Обработчики элементов управления формы
function ПриОткрытии() {

	Форма.ИнтервалОпроса = settings.current.ИнтервалОпроса;

	Форма.ЭлементыФормы.ДеревоМетаданных.Колонки.UUID.Видимость = false;
	Форма.ЭлементыФормы.ДеревоМетаданных.Колонки.parentID.Видимость = false;
    if (!КонтейнерМетаданных)
        КонтейнерМетаданных = metadata.current;

	Форма.ДеревоМетаданных = ДеревоМетаданныхКонфигурации();
	Форма.ЭлементыФормы.ДеревоМетаданных.Колонки.Отметка.Ширина = 1;

    if (settings.current.МетаданныеДляЗахвата != "") {
        СтруктураПоиска = v8New("Структура");
        СтруктураПоиска.Вставить("UUID");
		СтруктураПоиска.Вставить("parentID");
                
        сооUUID = ЗначениеИзСтрокиВнутр(settings.current.МетаданныеДляЗахвата);
        for (var стрСоо = new Enumerator(сооUUID) ; !стрСоо.atEnd() ; стрСоо.moveNext()) {
            var Строка = стрСоо.item();
            СтруктураПоиска.UUID = Строка.Ключ;
			СтруктураПоиска.parentID = Строка.Значение;
            НайденныеСтроки = Форма.ДеревоМетаданных.Строки.НайтиСтроки(СтруктураПоиска, true);
            
			for (var НайденнаяСтрока = new Enumerator(НайденныеСтроки); !НайденнаяСтрока.atEnd(); НайденнаяСтрока.moveNext()) {
				var СтрокаДерева = НайденнаяСтрока.item();
				СтрокаДерева.Отметка = true;
			}
        }
    }
}

function ДеревоМетаданныхПриВыводеСтроки(Элемент, ОформлениеСтроки, ДанныеСтроки)
{
    try {
        ОформлениеСтроки.val.Ячейки.Имя.УстановитьКартинку(ДанныеСтроки.val.Картинка)
    } catch (e) {
        // действие не требуется
    }
}

function КнопкаОК(Элемент) {
	
    сооUUID = v8New("Соответствие");
    
    СтруктураПоиска = v8New("Структура");
    СтруктураПоиска.Вставить("Отметка", true);

    НайденныеСтроки = Форма.ДеревоМетаданных.Строки.НайтиСтроки(СтруктураПоиска, true);
    for (var НайденнаяСтрока = new Enumerator(НайденныеСтроки); !НайденнаяСтрока.atEnd(); НайденнаяСтрока.moveNext()) {
        var Строка = НайденнаяСтрока.item()
		сооUUID.Вставить(Строка.UUID, Строка.parentID);
    }
    
    settings.current.МетаданныеДляЗахвата = ЗначениеВСтрокуВнутр(сооUUID);
    settings.current.ИнтервалОпроса = Форма.ИнтервалОпроса;
    settings.SaveSettings();
    Форма.Закрыть();
    saveProfile();
}

function КнопкаОтмена(Элемент) {
    Форма.Закрыть();
}

//} Обработчики элементов управления формы

function ДеревоМетаданныхКонфигурации()
{
	ОбщееДерево = v8New("ДеревоЗначений");
	ОбщееДерево.Колонки.Добавить("Отметка");
	ОбщееДерево.Колонки.Добавить("Имя");
	ОбщееДерево.Колонки.Добавить("Картинка");
	ОбщееДерево.Колонки.Добавить("UUID");
	ОбщееДерево.Колонки.Добавить("parentID");
	
	Корень = ОбщееДерево.Строки.Добавить();
	Общее = Корень.Строки.Добавить();
	Общее.Имя = "Общее";
	ОбщееЗаполнено = false;
	
	ОбойтиДерево(КонтейнерМетаданных.rootObject, Общее);
	
	return ОбщееДерево;
}

function ОбойтиДерево(ОбъектМетаданных, Родитель)
{	
	var ТекРодитель;
	
	if (Родитель == Общее && !ОбщееЗаполнено)
	{
		ТекРодитель = Общее;
		Корень.Имя = ОбъектМетаданных.name;
		Корень.UUID = ОбъектМетаданных.id;
		Корень.Картинка = ОбъектМетаданных.picture;
	} else if (Родитель == Общее)
	{
		ТекРодитель = Корень;
		Корень.Имя = ОбъектМетаданных.name;
		Корень.UUID = ОбъектМетаданных.id;
		Корень.Картинка = ОбъектМетаданных.picture;
	}
    else {
		ТекРодитель = Родитель.Строки.Добавить();
		ТекРодитель.Имя = ОбъектМетаданных.name;
		ТекРодитель.UUID = ОбъектМетаданных.id;
		ТекРодитель.parentID = Родитель.UUID;
    }

	try {
		ТекРодитель.Картинка = ОбъектМетаданных.picture;
		Родитель.Картинка = ОбъектМетаданных.picture;
	} catch (e){}
	
    var КлассМетаданных = ОбъектМетаданных.mdclass;
    
    for(var i = 0, im = КлассМетаданных.childsClassesCount; i < im; i++)
    {
		var Потомок = КлассМетаданных.childClassAt(i);
		var ИмяКласса = Потомок.name(1, true);
		
		if (ИмяКласса == "Константы")
		{
			ОбщееЗаполнено = true;
			ТекРодитель = Корень;
		}
        
		if (ИмяКласса == "Реквизиты") continue
		if (ИмяКласса == "ТабличныеЧасти") continue
		if (ИмяКласса == "РеквизитыАдресации") continue
		if (ИмяКласса == "Измерения") continue
		if (ИмяКласса == "Ресурсы") continue
		if (ИмяКласса == "ПризнакиУчета") continue
		if (ИмяКласса == "ПризнакиУчетаСубконто") continue
		if (ИмяКласса == "ПризнакиУчета") continue
		if (ИмяКласса == "Операции") continue
		if (ИмяКласса == "ШаблоныURL") continue
		if (ИмяКласса == "Кубы") continue
		if (ИмяКласса == "Функции") continue
		
		if (ОбъектМетаданных.childObjectsCount(i) == 0) continue;
		
		var НовыйРодитель = ТекРодитель.Строки.Добавить();
		НовыйРодитель.Имя = ИмяКласса;
		НовыйРодитель.UUID = Потомок.id;
		НовыйРодитель.parentID = ТекРодитель.UUID;
		
        for(var chldidx = 0, c = ОбъектМетаданных.childObjectsCount(i); chldidx < c; chldidx++){
            var ДочернийОбъект = ОбъектМетаданных.childObject(i, chldidx);
            ОбойтиДерево(ДочернийОбъект, НовыйРодитель);
        }
    }
}

settings.LoadSettings();
