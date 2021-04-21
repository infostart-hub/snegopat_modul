//engine: JScript
//uname: starter
//debug: no
//descr: Самый первый скрипт, который загружает все остальные аддины
//author: orefkov
//help: inplace

/*
 * (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
 * Стартовый скрипт, загружающий все остальные
 */

/// <reference path="../snegopat.d.ts"/>
/// <reference path="../v8.d.ts"/>

/*@
Это основной скрипт для запуска работы подсистемы аддинов в снегопате.
Большая часть функционала снегопата, а также почти весь пользовательский интерфейс
реализован в виде скриптов, которые для основного движка снегопата сами являются
обычными аддинами. Основной движок снегопата сначала инициализирует свою часть,
после чего дожидается создания и отображения основного окна. После этого он загружает этот скрипт
как первый и единственный аддин, загружаемый самим снегопатом.
Все остальные аддины загружаются уже этим скриптом посредством работы со SnegAPI.
@*/
(function () {
    // Выгрузимся сами. Аддин удаляется из списка аддинов сразу, но скрипт продолжает работу
    // до выхода из функции.
    addins.unloadAddin(addins.byUniqueName(SelfScript.uniqueName));
    // проверим версию движка
    if (ScriptEngineMajorVersion() < 5 || (ScriptEngineMajorVersion() == 5 && ScriptEngineMinorVersion() < 7)) {
        MessageBox("Плохая версия скриптового движка. Обновите JScript.", mbOK, "Снегопат", 5);
        return;
    }
    // Загрузим аддины
    loadStdAddins() && loadUserAddins();

    // Загрузка стандартных аддинов
    function loadStdAddins() {
        var group = addins.sys;
        var prefix = "script:addins\\std\\";
        return loadAddin(prefix + "vbs.vbs", group) &&
            loadAddin(prefix + "commands.js", addins.root) &&
            loadAddin(prefix + "std.js", group) &&
            loadAddin(prefix + "hotkeys.js", group) &&
            loadAddin(prefix + "macroswnd.js", group) &&
            loadAddin(prefix + "help.js", group) &&
            loadAddin(prefix + "snegopat.js", group) &&
            loadAddin(prefix + "select_scripts.js", group) 
            ;
    }

    function loadUserAddins() {
        addins.byUniqueName("select_scripts").object().loadUserScripts();
    }

    function loadAddin(loaderStr, group) {
        //Message("Load " + loaderStr);
        if (!addins.loadAddin(loaderStr, group)) {
            Message("Ошибка загрузки аддина '" + loaderStr + "': " + addins.lastAddinError);
            return false;
        }
        return true;
    }
})();
