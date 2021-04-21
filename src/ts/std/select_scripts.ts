//engine: JScript
//uname: select_scripts
//dname: Выбор подключаемых скриптов
//debug: yes
//author: orefkov
//descr: Скрипт для настройки состава подключаемых скриптов Снегопата
//help: inplace

/*
 * (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
 * Выбор подключаемых скриптов.
 */

/// <reference path="../snegopat.d.ts"/>
/// <reference path="../v8.d.ts"/>

/*@
Скрипт позволяет выбрать, какие скрипты Снегопата подключать при его запуске.

Настройка осуществляется расстановкой галочек на сриптах - какие загружать, какие нет.
После нажатия "Запомнить и применить" - запоминается расстановка галочек, закрывается форма,
и те скрипты, которые нужно запустить, и не запущены - запускаются, а какие не нужно запустить,
а они работают, соответственно, выгружаются.

Если окно просто закрыть - ничего не происходит.

Можно сразу снять выбор со всех скриптов. Можно включить те, авторы которых посчитали нужным
внести их в рекомендуемые для разных уровней опыта пользования Снегопатом.
Гуру могут одной кнопкой включить все скрипты.
@*/

//global.connectGlobals(SelfScript);
import * as stdlib from "./std";
import * as helpsys from "./help";
import { AddinInfo, Category, AddinsList } from "./build";

type AddinsTreeRow = {Addin: string, OnOff: boolean, Descr: string, Picture: number, ScriptInfo: AddinInfo} & ValueTreeRow;
type AddinsTreeRows = {Add(): AddinsTreeRow, Get(idx: number): AddinsTreeRow } & ValueTreeRowCollection;
type AddinsValueTree = {Rows: AddinsTreeRows} & ValueTree;

type MyForm = {
	AddinsTree: AddinsValueTree,
	Controls: {AddinInfo: HTMLDocumentField, AddinsTree: TableBox} & Controls
} & Form;

var profileKey = "Snegopat/LoadAddins";

class SelectScriptsForm {
	static oneForm: SelectScriptsForm = null;

	static openForm() {
		if (!this.oneForm)
			this.oneForm = new SelectScriptsForm();
		this.oneForm.form.Open();
	}

	form: MyForm;

	constructor() {
		this.form = loadScriptFormEpf(env.pathes.addins + "std\\forms\\sn_forms.epf", "SelectScripts", this);
		this.form.AddinsTree.Columns.Add("ScriptInfo");
	}
	ПриОткрытии() {
		this.form.AddinsTree.Rows.Clear();
		var repo = stdlib.allAddins();
		(function(category: Category, rows: AddinsTreeRows) {
			for (var catIdx in category.childs) {
				var cat = category.childs[catIdx];
				var r = rows.Add();
				r.Addin = cat.name;
				r.Picture = 0;
				r.OnOff = false;
				arguments.callee(cat, r.Rows);
			}
			for (var i in category.scripts) {
				var uname = category.scripts[i];
				var scr = repo.scripts[uname];
				var r = rows.Add();
				r.Addin = scr.name;
				r.Descr = scr.tags.descr;
				r.Picture = 2;
				r.ScriptInfo = scr;
				r.OnOff = !!addins.byUniqueName(uname);
			}
		})(repo.categories, this.form.AddinsTree.Rows);
	}
	AddinsTreeПриВыводеСтроки(Элемент, ОформлениеСтроки, ДанныеСтроки) {
		var data: AddinsTreeRow = ДанныеСтроки.val;
		ОформлениеСтроки.val.Cells.Addin.ОтображатьФлажок = data.Picture != 0;
		ОформлениеСтроки.val.Cells.Addin.Флажок = data.OnOff;
	}
	AddinsTreeПриИзмененииФлажка(Элемент, Колонка) {
		Элемент.val.ТекущаяСтрока.OnOff = !Элемент.val.ТекущаяСтрока.OnOff;
	}

	forAllRows(func: (a: AddinsTreeRow)=>void) {
		(function(rows:AddinsTreeRows) {
			for (var i = 0; i < rows.Count(); i++) {
				var r = rows.Get(i);
				arguments.callee(r.Rows);
				func(r);
			}
		})(this.form.AddinsTree.Rows);
	}

	selectByLevel(level: number) {
		this.forAllRows((r: AddinsTreeRow) => { if (r.ScriptInfo && r.ScriptInfo.autoLevel > 0 && r.ScriptInfo.autoLevel <= level) r.OnOff = true; });
	}
	
	CmdBarallOff(button) {
		this.forAllRows((a: AddinsTreeRow) => { a.OnOff = false; });
	}
	CmdBarallForAll(button) {
		this.forAllRows((a: AddinsTreeRow) => { if (a.ScriptInfo) a.OnOff = true; });
	}
	CmdBarallForBeginner(button) {
		this.selectByLevel(1);
	}
	CmdBarallForMid(button) {
		this.selectByLevel(2);
	}
	CmdBarallForTop(button) {
		this.selectByLevel(3);
	}
	
	CmdBarcmdApply(button) {
		var vt: ValueTree = profileRoot.getValue(profileKey);
		if (!vt) {
			vt = v8New("ValueTree");
			vt.Columns.Add("Addin");
			vt.Columns.Add("isGroup");
			profileRoot.createValue(profileKey, vt, pflSnegopat);
		} else
			vt.Rows.Clear();
		
		(function (srcTreeRows: AddinsTreeRows, destTreeRows: ValueTreeRowCollection, parentGroup: AddinGroup) {
			for (var i = 0; i < srcTreeRows.Count(); i++) {
				var r = srcTreeRows.Get(i);
				if (r.ScriptInfo) {
					var addin = addins.byUniqueName(r.ScriptInfo.tags.uname);
					if (r.OnOff) {
						var destRow = destTreeRows.Add() as any;
						destRow.Addin = r.ScriptInfo.load;
						destRow.isGroup = false;
						if (!addin)
							loadAddin(r.ScriptInfo.load, parentGroup);
					} else if (addin)
						addins.unloadAddin(addin);
				} else {
					var aGroup = parentGroup.addGroup(r.Addin);
					var destRow = destTreeRows.Add() as any;
					arguments.callee(r.Rows, destRow.Rows, aGroup);
					if (destRow.Rows.Count()) {
						destRow.Addin = r.Addin;
						destRow.isGroup = true;
					} else {
						destTreeRows.Delete(destRow);
						parentGroup.removeGroup(aGroup);
					}
				}
			}
		})(this.form.AddinsTree.Rows, vt.Rows, addins.users);
		profileRoot.setValue(profileKey, vt);
		this.form.Close();
	}
	CmdBarHelp(button) {
		var row = this.form.Controls.AddinsTree.CurrentRow as AddinsTreeRow;
		if (row && row.ScriptInfo) {
			helpsys.getHelpSystem().openHelp(row.ScriptInfo);
		}
	}
	AddinsTreeПриАктивизацииСтроки(control) {
		var row = this.form.Controls.AddinsTree.CurrentRow as AddinsTreeRow;
		if (row && row.ScriptInfo && row.ScriptInfo.helpPath)
			this.form.Controls.AddinInfo.Navigate(env.pathes.main + row.ScriptInfo.helpPath);
		else {
			//this.form.Controls.AddinInfo.Navigate(env.pathes.main + "help\\docs_firststep.md0.html");
			//this.form.Controls.AddinInfo.Navigate("about:blank");
			this.form.Controls.AddinInfo.SetText("<html><body></body></html>");
		}
	}
	КонтекстноеМенюbtnReload(button) {
		var row = this.form.Controls.AddinsTree.CurrentRow as AddinsTreeRow;
		if (row && row.ScriptInfo) {
			var addin = addins.byUniqueName(row.ScriptInfo.tags.uname);
			if (addin && addins.isAddinUnloadable(addin)) {
				try {
					addins.unloadAddin(addin);
					addins.loadAddin(row.ScriptInfo.load, addin.group);
				} catch (e) {
					Message("Произошла ошибка: " + e.description);
				}
			}
		}
	}
}

function openForm() {
	SelectScriptsForm.openForm();
}

function loadAddin(loaderStr, group) {
	//Message("Load " + loaderStr);
	if (!addins.loadAddin(loaderStr, group)) {
		Message("Ошибка загрузки аддина '" + loaderStr + "': " + addins.lastAddinError);
		return false;
	}
	return true;
}

function loadUserScripts() {
	// Список загружаемых аддинов хранится в виде дерева значений в настройках снегопата
	var vt = profileRoot.getValue(profileKey);
	if (!vt || !vt.Rows.Count()) {
		openForm();
	} else {
		(function (rows, parentGroup) {
			for (var i = 0, c = rows.Count(); i < c; i++) {
				var row = rows.Get(i);
				if (row.isGroup)
					arguments.callee(row.Rows, parentGroup.addGroup(row.Addin));
				else
					loadAddin(row.Addin, parentGroup);
			}
		})(vt.Строки, addins.users);
	}
}
