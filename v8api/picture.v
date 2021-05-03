// (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
// Описание интерфейсов 1С.

// тип V8Picture
:struct V8Picture
	:props
		int kind
		CompositeID cid
		URL url
		IV8Picture@ picture
		Point pxForTransparent
		bool withTransparent
		bool isGlyph
	  #if ver < 8.3.10
		Size szGlyph
		Point ptGlyph
	  #else
		Point ptGlyph
	   //#if x86 = 1
		Size szGlyph
	   //#else
		//uint32 i1
		//uint16 i2
	   //#endif
	  #endif
	:dlls
	  #if ver < 8.3
		core82.dll
	  #else
		core83.dll
	  #endif
		void ctor()|??0V8Picture@core@@QAE@XZ|??0V8Picture@core@@QEAA@XZ
		bool compareAttribs(const V8Picture&in)const|?compareAttribs@V8Picture@core@@QBE_NABV12@@Z|?compareAttribs@V8Picture@core@@QEBA_NAEBV12@@Z
		bool opEqual(const V8Picture&in)const|??8V8Picture@core@@QBE_NABV01@@Z|??8V8Picture@core@@QEBA_NAEBV01@@Z


:iface IImage {1646CCC0-E876-11D3-8A57-008048DA06DF}
	:virt
	  +1

:iface IV8Picture {A642A571-E2E8-11D4-A8FB-0050BA849130}
	:virt
	  +1

:iface IGlyph {36ABA6D0-DA61-11D4-84C5-008048DA06DF}
	:virt
	  +1

:iface IV8PictureValue {A94DED2B-D473-4394-AC44-51501435CCEF}
    :virt
		void setPicture(const V8Picture& picture)
		void getPicture(V8Picture& picture)

:struct Glyph
	:props
		size_t p1
		size_t p2
		size_t p3
		size_t p4
		IImage@ block
		Size size
		Point point

:enum PictOffset
#if x86
  #if ver < 8.3.6
	64 pictOffset
  #elif ver < 8.3.16
	68 pictOffset
  #else
	64 pictOffset
  #endif
#else
  #if ver < 8.3.16
	0x68 pictOffset
  #else
	0x70 pictOffset
  #endif
#endif

:guid CLSID_V8PictureValue {85D76168-7B84-4321-89CC-E04A68E81047}