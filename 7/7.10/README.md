you can define it like this:

```c++
namespace constants
{
	extern constexpr double pi { 3.14159 };
}
```

and have a declaration like this in another file:

```cpp
namespace constants
{
    extern const double pi;
}
```

- define `constexpr` global variables in header files if its C++17+