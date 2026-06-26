- **profiler**: a program that is used to see how long a certain part of the code takes to run
- **optimizer**: a program that optimizes another program

- a compiler is an optimizer

- **constant folding**: if the compiler sees `3 + 4`, it will just replace it with `7`

### constant propagation

```cpp
#include <iostream>

int main()
{
	int x { 7 };
	std::cout << x << '\n';

	return 0;
}
```

- it will replace any instances of `x` with `7`

```cpp
#include <iostream>

int main()
{
	int x { 7 };
	std::cout << 7 << '\n';

	return 0;
}
```

### dead code elimination

- it would eliminate the definition of `x` since it's not used/ not needed

```cpp
#include <iostream>

int main()
{
	std::cout << 7 << '\n';

	return 0;
}
```

- this means that the variable has been **optimized out/ optimized away** of/ from the code

- this example would be made easier if we declared `x` as `const`, it would be tricky for the compiler to do on its own

- optimizations can make the program harder to debug since the optimized code is very different from the original code