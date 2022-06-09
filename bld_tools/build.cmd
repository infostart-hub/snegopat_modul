:: (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
:: Скрипт, вызываемый из Visual Studio при сборке проекта. Копирует различные файлы
:: в папку сборки, запускает компиляцию TypeScript файлов в JavaScript, запускает
:: проверку AngelScript части движка Снегопата.
:: Первым параметром при вызове скрипта передают путь к каталогу сборки.
@echo off
set ProjectDir=%~dp0..\
cd /d "%~1..\..\"
:: Копируем то, что нужно просто скопировать
robocopy "%ProjectDir%addins" addins\ /mir /im /NJH /NJS /NP   > nul
robocopy "%ProjectDir%tools" tools\ /mir /im /NJH /NJS /NP     > nul
robocopy "%ProjectDir%www" www\ /mir /im /NJH /NJS /NP         > nul
robocopy "%ProjectDir%load" ..\..\load\ /mir /im /NJH /NJS /NP > nul
:: Соберем скрипты из TypeScript
set rootdir=%cd%
cd /d "%ProjectDir%"
echo Typescript -^> JScript...
packages\Microsoft.TypeScript.Compiler.3.1.5\tools\tsc.exe -p "src\ts" --outDir "%rootdir%\addins"
:: Проверяем модуль
echo Синтакс-проверка 8.3.10...
coreas_runner_c check snegopat /f "%cd%\" /d ver=8.3.10
echo Синтакс-проверка 8.3.18...
coreas_runner_c check snegopat /f "%cd%\" /d ver=8.3.18

