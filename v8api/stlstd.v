// (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
// Описание интерфейсов 1С.

// Типы стандартной библиотеки

// Вектор
:class Vector
:props
	int_ptr start
	int_ptr end
	int_ptr allocated
:meths
	void ctor()
	{
		obj.start = obj.end = obj.allocated = 0;
	}
	---
	void dtor()
	{
		if(obj.start != 0)
	  #if ver < 8.3.11
			free(obj.start);
	  #else
			v8free(obj.start, obj.allocated - obj.start);
	  #endif
	}
	---
	size_t size()
	{
		return obj.end - obj.start;
	}
	---
	int_ptr alloc(size_t count, size_t size)
	{
		uint s = count * size;
		obj.start =
	  #if ver < 8.3.11
		malloc(s);
	  #else
		v8malloc(s);
	  #endif
		obj.allocated = obj.end = obj.start + s;
		return obj.start;
	}
	---
	size_t count(size_t s)
	{
		return obj.start == 0 ? 0 : (obj.end - obj.start) / s;
	}
	---

:global
:meths
	int_ptr v8malloc(size_t count)
	{
		int_ptr m;
	  #if ver >= 8.3.11
		if (count >= 0x1000) {
			m = malloc(count + 31 + sizeof_ptr);
			uint km = (m + 31 + sizeof_ptr) & ~31;
			mem::int_ptr[km - sizeof_ptr] = m;
			m = km;
		} else
	  #endif
			m = malloc(count);
		return m;
	}
	---
	void v8free(int_ptr ptr, size_t allocked)
	{
	  #if ver >= 8.3.11
		if (allocked >= 0x1000)
			ptr = mem::int_ptr[ptr - sizeof_ptr];
	  #endif
		free(ptr);
	}
	---
