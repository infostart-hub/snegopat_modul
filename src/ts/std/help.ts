//engine: JScript
//uname: help
//dname: Справка снегопата
//debug: yes
//descr: Скрипт для организации работы справочной системы снегопата
//author: orefkov
//help: inplace
//addin: global

/*
 * (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
 * Работа справочной подсистемы
 */

/// <reference path="../snegopat.d.ts"/>
/// <reference path="../v8.d.ts"/>

import * as stdlib from "./std";
import { AddinInfo, Category, AddinsList, HelpInfo } from "./build";

global.connectGlobals(SelfScript);

/*@
Скрипт организует работу справочной системы снегопата.
Основной формат для справочной информации в снегопате - markdown.
Вся документация хранится в этом формате, а для отображения преобразуется
в html-формат.
@*/

/**
 * Введём несколько интерфейсов и типов для удобства
 */

type TopicInfoRow = HelpInfo & {level: number} & ValueTableRow;
type TopicsTable = { Get(p: number): TopicInfoRow, Add(): TopicInfoRow } & ValueTable;
type SearchTable = { Get(p: number): {docid: number } & ValueTableRow } & ValueTable;

/**
 * Обёртка над поисковой базой данных
 */
var Store = (function () {
    var db: SqliteBase;
    var queries = {
        sSearch: { q: <SqliteQuery>null, t: 'select search.docid as docid from search where search match @text' },
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
                //db.exec(cStruct);
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
        searchTopics: function(text: string): SearchTable {
            return queries.sSearch.q.bind(1, text).exec();
        }
    };
})();

/*
 * Данный класс предназначен для работы со справочной системой снегопата.
 */
class HelpSystem {
    static hs: HelpSystem = null;
    root: HelpInfo = null;
    allFiles:{[key:string] : HelpInfo} = {};
    allTopics:{[key:number] : HelpInfo} = {};

    constructor() {
        if (!Store.open(env.pathes.help + "help.db"))
            return;
        var repoAddin = addins.byUniqueName("all.js");
        if (!repoAddin)
            repoAddin = addins.loadAddin("script:addins\\std\\all.js", addins.sys);
        this.root = stdlib.allAddins().help;
        this.walkHelp(this.root, null);
    }
    walkHelp(folder, parent) {
        folder.parent = parent;
        folder.row = null;
        for (var i in folder.childs)
            this.walkHelp(folder.childs[i], folder);
        if (folder.helpId)
            this.allTopics[folder.helpId] = folder;
        if (folder.path)
            this.allFiles[folder.path] = folder;
    }
    searchTopics(text: string): SearchTable {
        return Store.searchTopics(text);
    }
    openHelp(ai: AddinInfo) {
        var a = addins.byUniqueName("snegopatwnd");
        if (!a)
            a = addins.loadAddin("script:addins\\std\\snegopatwnd.js", addins.sys);
        (<any>a.object()).openPage("Help");
        (<any>a.object()).HelpPage.helpPage.activateByPath(ai.helpPath);
    }
};

export function getHelpSystem() {
    if (!HelpSystem.hs)
        HelpSystem.hs = new HelpSystem;
    return HelpSystem.hs;
}
