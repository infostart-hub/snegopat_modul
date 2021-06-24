// (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
// Описание интерфейсов 1С.

// тип CompositeID
:struct CompositeID
:props
	int id
	Guid uuid
	bool emptyUuid

:dlls
#if ver < 8.3
	core82.dll
#else
	core83.dll
#endif
	void ctor()|??0CompositeID@core@@QAE@XZ|??0CompositeID@core@@QEAA@XZ
	void ctor(const Guid&)|??0CompositeID@core@@QAE@ABU_GUID@@@Z|??0CompositeID@core@@QEAA@AEBU_GUID@@@Z
	void ctor(uint)|??0CompositeID@core@@QAE@J@Z|??0CompositeID@core@@QEAA@J@Z
	void ctor(uint, const Guid&)|??0CompositeID@core@@QAE@JABU_GUID@@@Z|??0CompositeID@core@@QEAA@JAEBU_GUID@@@Z
	bool opEquals(const CompositeID&in)const|??8CompositeID@core@@QBE_NABV01@@Z|??8CompositeID@core@@QEBA_NAEBV01@@Z

