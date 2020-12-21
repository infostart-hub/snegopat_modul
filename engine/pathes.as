/* pathes.as
    Установка путей к различным папкам снегопата.
    Устанавливаются следующие пути:
    main - путь к корневой папке снегопата
    core - путь к папке с движком снегопата
    addins - путь к официальному репозитарию аддинов
    tools - путь к папке с разными вспомогательными инструментами
    data - путь к папке с данными
    help - путь к папке со сформированными файлами справки
    custom - путь к пользовательскому репозитарию аддинов
    tmp - путь к папке временных файлов
    Путь main - всегда показывает на каталог снегопата.
    Путь tmp - всегда на папку с временными файлами.
    К остальным папкам пути устанавливаются в каталоге снегопата,
    однако для них можно задать альтернативные пути:
    - либо в командной строке указать -sn-path-xxx=путь
    - либо установить переменную окружения sn_path_xxx
    Если альтернативный путь начинается с точки, перед ним добавляется путь
    к папке снегопата.
*/
#pragma once
#include "../all.h"

void initPathes() {
    &&pathes = Pathes();
}

Pathes&& pathes;
string cmdLine;

class Pathes {
    string _main;
    string _core;
    string _addins;
    string _tools;
    string _data;
    string _help;
    //string _custom;
    //string _repo;
    string _tmp;

    Pathes() {
        _main = myFolder;
        _tmp = env.tempDir;
        _core = myFolder;
        _addins = myFolder + "addins";
        _tools = myFolder + "tools";
        _data = env.dataDir;
        _help = myFolder + "docs";
        //_custom = , "custom");
        //setPath(_repo, "repo");
    }
};
