#pragma once 
typedef unsigned char 		uint8;
typedef unsigned short 		uint16;
typedef unsigned int 		uint;
typedef unsigned int		uint32;
typedef unsigned __int64 	uint64;
typedef char 				int8;
typedef short 				int16;
typedef int					int32;
typedef __int64 			int64;

#define in
#define out
#define inout
#define is ==
#define null nullptr
#define interface struct
#define class struct
#define cast reinterpret_cast
#define mixin
#define funcdef
inline static void super(...) {}

#ifdef _WIN64
#include "api64.h"
#else
#include "api.h"
#endif

#include "engine/addins.as"
#include "engine/add_global.as"
#include "engine/colorer.as"
#include "engine/com_commands.as"
#include "engine/com_debug.as"
#include "engine/com_designer.as"
#include "engine/com_events.as"
#include "engine/com_files.as"
#include "engine/com_hotkeys.as"
#include "engine/com_metadata.as"
#include "engine/com_profile.as"
#include "engine/com_snegopat.as"
#include "engine/com_sqlite.as"
#include "engine/com_textwindow.as"
#include "engine/com_v8ti.as"
#include "engine/com_v8value.as"
#include "engine/com_windows.as"
#include "engine/controls.as"
#include "engine/develop.as"
#include "engine/dllloader.as"
#include "engine/exitApp.as"
#include "engine/forms.as"
#include "engine/grid.as"
#include "engine/intellisite.as"
#include "engine/keywords.as"
#include "engine/lexer.as"
#include "engine/main.as"
#include "engine/mainframe.as"
#include "engine/mlist.as"
#include "engine/ModuleElements.as"
#include "engine/ModuleTextProcessor.as"
#include "engine/options.as"
#include "engine/packets.as"
#include "engine/pathes.as"
#include "engine/scriptLoader.as"
#include "engine/smartboxitems.as"
#include "engine/sqlcolors.as"
#include "engine/StockListInterceptor.as"
#include "engine/synedit.as"
#include "engine/tests.as"
#include "engine/textwnd.as"
#include "engine/typereader.as"
#include "engine/winapi.as"
