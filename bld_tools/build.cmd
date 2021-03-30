@echo off
set ProjectDir=%~dp0..\
cd /d "%~1..\..\"
:: Копируем то, что нужно просто скопировать
robocopy "%ProjectDir%addins" addins\ /mir /im /NJH /NJS /NP>nul
robocopy "%ProjectDir%tools" tools\ /mir /im /NJH /NJS /NP>nul
robocopy "%ProjectDir%www" www\ /mir /im /NJH /NJS /NP>nul
robocopy "%ProjectDir%load" ..\..\load\ /mir /im /NJH /NJS /NP>nul
:: Соберем скрипты из TypeScript
set rootdir=%cd%
cd /d "%ProjectDir%"
echo Typescript -^> JScript...
tsc.exe -p "src\ts" --outDir "%rootdir%\addins"
echo Готово
:: Проверяем модуль
echo Синтакс-проверка...
runner check snegopat /f "%cd%\" /d ver=8.3.18
echo Готово
