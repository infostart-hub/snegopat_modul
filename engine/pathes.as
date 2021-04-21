/*
 * (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
 * Установка путей к различным папкам снегопата.
 * Устанавливаются следующие пути:
 * main - путь к корневой папке снегопата
 * core - путь к папке с движком снегопата
 * addins - путь к официальному репозитарию аддинов
 * tools - путь к папке с разными вспомогательными инструментами
 * data - путь к папке с данными
 * help - путь к папке со сформированными файлами справки
 * tmp - путь к папке временных файлов
 * Путь main - всегда показывает на каталог снегопата.
 * Путь tmp - всегда на папку с временными файлами.
 */

// Данные строки нужны только для среды разработки и вырезаются препроцессором
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
    string _tmp;

    Pathes() {
        _main = myFolder;
        _tmp = env.tempDir;
        _core = myFolder;
        _addins = myFolder + "addins\\";
        _tools = myFolder + "tools\\";
        _data = env.dataDir;
        _help = myFolder + "help\\";
    }
};
