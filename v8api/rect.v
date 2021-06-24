// (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
// Описание интерфейсов 1С.

// Тип Rect
:mixin Rect
:dlls
#if ver < 8.3
	core82.dll
#else
	core83.dll
#endif
	//void ctor(const Point&in, const Point&in)|??0Rect@core@@QAE@ABUtagPoint@@0@Z
	//void ctor(const Point&in, const Size&in)|??0Rect@core@@QAE@ABUtagPoint@@ABUtagSIZE@@@Z
	void ctor(int, int, int, int)|??0Rect@core@@QAE@HHHH@Z|??0Rect@core@@QEAA@HHHH@Z
	Rect& combine(const Rect&in)|?combine@Rect@core@@QAEAAU12@ABU12@@Z|?combine@Rect@core@@QEAAAEAU12@AEBU12@@Z
	Rect& inflate(int, int)|?inflate@Rect@core@@QAEAAU12@HH@Z|?inflate@Rect@core@@QEAAAEAU12@HH@Z
	Rect& intersect(const Rect&in)|?intersect@Rect@core@@QAEAAU12@ABU12@@Z|?intersect@Rect@core@@QEAAAEAU12@AEBU12@@Z
	Rect& normalize()|?normalize@Rect@core@@QAEAAU12@XZ|?normalize@Rect@core@@QEAAAEAU12@XZ
	Rect& offset(int, int)|?offset@Rect@core@@QAEAAU12@HH@Z|?offset@Rect@core@@QEAAAEAU12@HH@Z
	//void swap(Rect&)|?swap@Rect@core@@QAEXAAU12@@Z

:global
:dlls
#if ver < 8.3
	core82.dll
#else
	core83.dll
#endif
	prop Rect kEmptyRect|?kEmptyRect@core@@3URect@1@B
