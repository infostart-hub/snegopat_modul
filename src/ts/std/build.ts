/*
 * (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
 *
 * Скрипт для подготовки списка скриптов репозитария снегопата.
 * Чтобы не строить этот список каждый раз на компьютере пользователя при старте каждого Конфигуратора, сделаем
 * это один раз при построении, и включим в репозитарий уже построенный список.
 * Снегопату останется только показать его.
 * Вызывается при сборке модуля из bld_tools\build.as
 */

// Опишем API, которое нам предоставляет build.as
type ResultRow = {
    col(idx: number): any;
    data(): {length: number, item(idx:number): any};
};

type SqliteQuery = {
    bind(idx:string|number, val: any): SqliteQuery;
    exec(isAnswerId?: boolean): number;
    query(): {length: number, item(idx:number): ResultRow};
    close();
};

type SqliteBase = {
    exec(strQuery: string, answerIsID?: boolean): number;
    get_lastError(): string;
    close();
    prepare(strQuery: string): SqliteQuery;
    changes(): number;
    totalChanges(): number;
    lastInsertedID(): number;
};

declare function isFileExist(path: string): boolean;
declare function isDirectory(path: string): boolean;
declare function createDirectory(path: string): boolean;
declare function findFiles(path: string, mask: string): {length: number, item(idx:number): string};
declare function readUtf8File(path: string): string;
declare function writeUtf8File(path: string, text: string): void;
declare function print(text: string): void;
declare function sqliteOpen(baseName?: string, flags?: number): SqliteBase;
declare var _marked: { parse(text: string): string };

export class Category {
    constructor(public name: string) {
    }
    childs: Category[] = [];
    scripts: string[] = [];
    
    addChild(categories: string, ai: AddinInfo) {
        var current: Category = this;
        var cats = categories.split('\\');
        for (var subCatIdx in cats) {
            var subCat = cats[subCatIdx];
            if (subCat) {
                var found: Category = null;
                for (var i in current.childs) {
                    if (current.childs[i].name.toUpperCase() == subCat.toUpperCase()) {
                        found = current.childs[i];
                        break;
                    }
                }
                if (!found) {
                    found = new Category(subCat);
                    current.childs.push(found);
                }
                current = found;
            }
        }
        current.scripts.push(ai.tags.uname);
    }

    sort() {
        this.childs.sort((a: Category, b: Category) => {
            return a.name.toUpperCase().localeCompare(b.name.toUpperCase());
        });
        this.scripts.sort((a: string, b: string) => {
            return addinsUnames[a].name.toUpperCase().localeCompare(addinsUnames[b].name.toUpperCase());
        });
        for (var i in this.childs)
            this.childs[i].sort();
    }
}

export class AddinInfo {
    tags = {
        uname: '',
        dname: '',
        descr: '',
        author: '',
        version: '',
        help: '',
        www: '',
        category: '',
        autoload: ''
    };
    load = '';
    helpPath = '';
    name = '';
    autoLevel = 0;
    constructor(public filePath: string) {
        // По умолчанию ставим уникальное имя равным имени файла, если скрипт его не укажет
        this.tags.uname =  /\\([^\\]+)$/.exec(filePath) ? RegExp.$1 : filePath;
    }
};

var catRoot = new Category('');
var addinsUnames: {[key: string]: AddinInfo} = {};

function parseFile(path: string, isScript: boolean) : AddinInfo {
    var ai = new AddinInfo(path);
    var text = readUtf8File(path).replace('\r\n', '\n').split('\n');
    var rexTag = isScript ? /^\s*\/\/\s*(\w+)\:[ \t]*(.*)/ : /^\s*(\w+)\:[ \t]*(.*)/
    for (var l in text) {
        if (rexTag.exec(text[l])) {
            if (RegExp.$1 in ai.tags)
                ai.tags[RegExp.$1] = RegExp.$2.replace(/\s+$/, "");
            else if (!isScript) {
                switch (RegExp.$1) {
                case 'script':
                    return parseFile(RegExp.$2, true);
                case 'file':
                    return parseFile(RegExp.$2, false);
                case 'load':
                    ai.load = RegExp.$2;
                    break;
                }
            }
        } else
            break;
    }
    if (isScript)
        ai.load = "script:" + path;
    return ai;
}

function processFolder(path: string, mask: string, isScript: boolean) : boolean {
    var success = true;
    var files = findFiles(path, mask);
    for (var idx = 0; idx < files.length; idx++) {
        var filePath = path + files.item(idx);
        var ai = parseFile(filePath, isScript);
        // Проверяем уникальное имя
        if (!ai.tags.uname) {
            print("При обработке файла " + filePath + " пустое уникальное имя!");
            success = false;
            continue;
        } else if (ai.tags.uname in addinsUnames) {
            print("При обработке файла " + filePath + " аддин с именем " + ai.tags.uname + " уже описан в файле " + addinsUnames[ai.filePath]);
            success = false;
            continue;
        }
        // Теперь строка загрузки
        if (!ai.load) {
            print("При обработке файла " + filePath + " не указана строка загрузки!");
            success = false;
            continue;
        }
        // Имя
        ai.name = ai.tags.dname || ai.tags.uname;
        // Путь к справке
        if (ai.tags.help)
            ai.helpPath = ai.tags.help == "inplace" ? ai.filePath : ai.tags.help;
        // Теперь категории
        if (!ai.tags.category && /^addins\\(.*)\\[^\\]+/.exec(ai.filePath))
            ai.tags.category = RegExp.$1;
        catRoot.addChild(ai.tags.category, ai);

        addinsUnames[ai.tags.uname] = ai;

        if (ai.tags.autoload) {
            var alLevel = parseInt(ai.tags.autoload);
            if (!isNaN(alLevel) && alLevel >= 1 && alLevel <= 3)
                ai.autoLevel = alLevel;
        }
    }
    return success;
}

export interface HelpInfo {
    name: string;
    childs: HelpInfo[];
    helpId?: number;
    path?: string;
    row?: any;
    parent?: HelpInfo;
}

export type AddinsList = { scripts: {[key: string]: AddinInfo}, categories: Category, help: HelpInfo};
var helpRoot: HelpInfo = {name: "", childs: [{name: "Справка Снегопата", childs: []}, {name: "Справка по скриптам", childs: []}]};

function saveAddinsList() {
    var allRepo: AddinsList = {
        scripts: addinsUnames,
        categories: catRoot,
        help: helpRoot
    }; 
    var str = JSON.stringify(allRepo, null, ' ');
    str = str.replace(/\\u[0-9a-f]{4}/g, (s) => {
        return String.fromCharCode(parseInt(s.substr(2), 16));
    });
    writeUtf8File("addins\\std\\all.js", "//engine: JScript\n\nvar allAddins=" + str + '\n');
}

function buildHelp() {
    /**
     * Обёртка над поисковой базой данных
     */
    var Store = (function () {
        var db: SqliteBase;
        var cStruct =
        `pragma journal_mode=off;pragma encoding='utf-16le';
        begin;
        create virtual table if not exists search using fts4(tokenize=unicode61);
        end`;
        var queries = {
            iSearch: { q: <SqliteQuery>null, t: `insert into search values(@text)` },
        };
        function prepareQueries() {
            for (var k in queries)
                queries[k].q = db.prepare(queries[k].t);
        }
        function closeQueries() {
            for (var k in queries) {
                if (queries[k].q) {
                    queries[k].q.close();
                    queries[k].q = null;
                }
            }
        }
        return {
            isOpen: function (): boolean {
                return !!db;
            },
            open: function (path: string): boolean {
                this.close();
                try {
                    db = sqliteOpen(path);
                    db.exec(cStruct);
                    prepareQueries();
                    return true;
                } catch (e) { Message(e.description); this.close(); return false; }
            },
            close: function () {
                if (db) {
                    closeQueries();
                    db.close();
                    db = null;
                }
            },
            begin: function () {
                db.exec("begin");
            },
            end: function () {
                db.exec("end");
            },
            insertSearchContent: function (text: string): number {
                return queries.iSearch.q.bind(1, text).exec(true);
            },
        };
    })();

    Store.open("help\\help.db");
    if (!Store.isOpen())
        return false;
    // Для построения справки переберем все файлы и папки в каталоге docs как "Документация снегопата", и список аддинов,
    // где перечислены их пути к справке, как "Описание скриптов".
    // В папку addins\docs могут быть помещены различные справочные файлы к аддинам, но отдельно они не обрабатываются,
    // только явно указанные в тегах скрипта как справочные:
    //help: addins\docs\mydoc.md

    function sortFiles(files) {
        var res = [];
        for (var i = 0; i < files.length; i++)
            res.push(files.item(i));
        res.sort((a1: string, a2: string) => { return a1.toLocaleLowerCase().localeCompare(a2.toLocaleLowerCase())});
        return res;
    }

    function processFolder(base: string, relPath: string, parent) {
        var files = sortFiles(findFiles(base + relPath, "*"));
        for (var i in files) {
            var f = files[i];
            if (f.charAt(0) == '.')
                continue;
            var fullName = base + relPath + f;
            if (isDirectory(f)) {
                var me = { name: f.replace(/^\d+\s*/, ""), childs: [] };
                processFolder(base, relPath + f + "\\", me);
            } else if (/\.(md|markdown|html|txt)$/i.test(f))
                processFile(base, relPath + f, parent, false);
        }
    }

    function processFile(base: string, relPath: string, parent, inplace: boolean, ai?: AddinInfo) {
        // Тут небольшой костыль для скриптов, собираемых из typescript, так как его компилятор
        // не всегда оставляет все комментарии на месте.
        var fileText;
        if (inplace && /addins\\([^\\]+)\.js$/i.exec(relPath) && isFileExist("..\\..\\..\\..\\src\\ts\\" + RegExp.$1 + ".ts"))
            fileText = readUtf8File("..\\..\\..\\..\\src\\ts\\" + RegExp.$1 + ".ts");
        else
            fileText = readUtf8File(base + relPath);
        if (inplace) {
            var lines = [];
            var re = /\/\*@([\s\S]*?)@\*\//g;
            while (re.exec(fileText))
                lines.push(RegExp.$1.replace(/\n'/gm, "\n"));
            fileText = lines.join('\n');
        }
        var fileName = "help\\" + relPath.replace(/\\(?:\d+\s+)*/g, "_");
        var parsed = "", needHead = true, splitTopics = false;
        // Далее нам надо разбить текст на топики, поправить ссылки внутри страницы
        var tit;
        if (/\.html$/i.test(relPath) && !inplace) {
            parsed = fileText;
            tit = parsed.match(/<title>(.+?)<\/title>/i);
            fileText = dehtml(fileText);
            needHead = false;
        } else if (inplace || /\.(markdown|md)$/i.test(relPath)) {
            splitTopics = true;
            if (inplace) {
                var head = "# " + ai.name + "\n";
                if (ai.tags.descr)
                    head += ai.tags.descr + "  \n";
                head += `<table width="100%" cellspacing="0" cellpadding="5">
                    <tr style="border: none;"><td style="text-align:right;font-weight:bold;color: #CCC;border: none;">uname</td><td style="border: none;" width="95%">${ai.tags.uname}</td></tr>`;
                if (ai.tags.author)
                    head += `<tr style="border: none;"><td style="text-align:right;font-weight: bold;color: #CCC;border: none;">Автор</td><td style="border: none;">${ai.tags.author}</td></tr>`;
                if (ai.tags.version)
                    head += `<tr style="border: none;"><td style="text-align:right;font-weight: bold;color: #CCC;border: none;">Версия</td><td style="border: none;">${ai.tags.version}</td></tr>`;
                if (ai.tags.www)
                    head += `<tr style="border: none;"><td style="text-align:right;font-weight: bold;color: #CCC;border: none;">www</td><td style="border: none;">
                        <a href="#" onclick="document.body.fireEvent('onhelp', document.createEventObject())" id="wwwsite">${ai.tags.www}</a>
                        </td></tr>`;
                fileText = head + "</table>\n\n---\n" + fileText;
            }
            parsed = _marked.parse(fileText);
            tit = parsed.match(/<h\d.*?>(.+?)<\/h\d>/i);
        } else {
            parsed = `<pre>${fileText}</pre>`;
        }
        if (!parsed) {
            if (ai)
                ai.helpPath = "";
            return;
        }
        if (!tit)
            tit = /\\[^\\]+/.exec(relPath);
        var title = tit[1];
        var topicTexts: {level:number, parsed: string, text: string, path:string, title: string, id?: number, parentId?: number}[] = [];
        var names={};
        // Разобъем на топики
        var reHeader: RegExp, found: RegExpExecArray;
        if (splitTopics && (reHeader = /<h([123]).*?>(.+?)<\/h/gi) && (found = reHeader.exec(parsed)) && found[1] == '1') {
            var reAnchor = /<a\s+.*?\s*name\s*=\s*"(.+?)"/gi;
            for (var idx = 0; ; idx++) {
                var level = parseInt(found[1]) - 1;
                var next = reHeader.exec(parsed);
                if (topicTexts.length && (level == 0 || level > topicTexts[topicTexts.length - 1].level + 1)) {
                    // Это нам поломает структуру топиков, не должно быть более одного заглавного хедера
                    // или повышения уровня топика более чем не 1.
                    level = 1;
                    next = null;
                }
                var end = next ? next.index : parsed.length;
                var topicText = parsed.substring(found.index, end);
                var pathToTopic = fileName + idx + ".html";
                topicTexts.push({level: level, parsed: topicText, text: dehtml(topicText), path: pathToTopic, title: found[2]});
                while (reAnchor.exec(topicText))
                    names[RegExp.$1] = pathToTopic;
                if (!next)
                    break;
                found = next;
            }
        } else {
            topicTexts.push({level: 0, text: fileText, parsed: parsed, path: fileName + ".html", title: title});
        }
        var lastInserted = parent, currentLevel = -1, currentParent = null;
        var stack = [];
        if (ai)
            ai.helpPath = topicTexts[0].path;
        for (idx = 0; idx < topicTexts.length; idx++) {
            var topic = topicTexts[idx];
            if (topic.level > currentLevel) {
                if (topic.level)
                    stack.push(currentParent);
                currentParent = lastInserted;
            } else if (topic.level < currentLevel) {
                currentParent = stack[topic.level];
                stack.splice(topic.level, stack.length);
            }
            currentLevel = topic.level;
            topic.parsed = topic.parsed.replace(/(<a\s+.*?\s*?href=")#(.+?)"/gi, function(str, str1, str2) {
                return str1 + (str2 in names ? "../" + names[str2] : "") + "#" + str2 + '"';
            });
            lastInserted = {name: topic.title, childs: [], helpId: Store.insertSearchContent(topic.text), path: topic.path };
            currentParent.childs.push(lastInserted);
            if (needHead)
                topic.parsed = `<html><head>
                <link rel="stylesheet" href="../www/md.css" type="text/css"/>
                <title>${topic.title}</title></head><body>${topic.parsed}</body>`;
            writeUtf8File(lastInserted.path, topic.parsed);
        }
    }

    function processAddins(cat: Category, parent) {
        for (var i in cat.childs) {
            var c = cat.childs[i];
            var fld = {name: c.name, childs: []};
            processAddins(c, fld);
            if (fld.childs.length)
                parent.childs.push(fld);
        }
        for (var i in cat.scripts) {
            var script = addinsUnames[cat.scripts[i]];
            if (script.helpPath)
                processFile("", script.helpPath, parent, script.helpPath == script.filePath, script);
        }
    }

    function dehtml(text: string) : string {
        return text.replace(/<head>.*?<\/head>|<script>.*?<\/script>|<\w+.*?>|<\/\w+>/gm, " ");
    }
   
    processFolder("..\\..\\..\\..\\", "docs\\", helpRoot.childs[0]);
    processAddins(catRoot, helpRoot.childs[1]);
    return true;
}

/*
 * Макрос вызывается из build.as
 * Кроме того, build.as предоставляет скрипту небольшое API для чтения/записи utf8 файлов,
 * сканирования каталогов, работы с sqlite, вывода сообщений в консоль и т.п.
 */
function macrosBuild() {
	print("Строим список скриптов...");
    var s1 = processFolder("addins\\", "*.js", true), s2 = processFolder("addins\\list\\", "*.info", false);
    if (!s1 || !s2)
        return 1;
    catRoot.sort();
	print("Строим справку...");
    buildHelp();
    saveAddinsList();
    return 0;
}
