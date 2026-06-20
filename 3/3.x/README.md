```cpp
#include <iostream>

void d()
{ // here
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();

	return 0;
}
```

call stack when its in `d()`:
```
d()
b()
a()
main()
```

`c()` finishes executing so it is not on the call stack in `d()`