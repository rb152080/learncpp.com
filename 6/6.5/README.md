- best practice is to avoid using `,` except in `for` loops

```cpp
constexpr int z{ 3 }, w{ 5 }; // Separator comma used to separate multiple variables being defined on the same line (don't do this)
```

```cpp
constexpr int classSize { inBigClassroom ? 30 : 20 };
```

- this works

```cpp
if (inBigClassroom)
	constexpr int classSize { 30 };
else
	constexpr int classSize { 20 };
```

- this doesn't work because its scope based
- `classSize` gets deleted after it is out of scope

```cpp
std::cout << ((x != 5) ? x : "x is 5"); // compile error: compiler can't find common type for constexpr int and C-style string literal
```

- they both have to be of the same type

```cpp
int x { 2 };
std::cout << (x < 0) ? "negative" : "non-negative";
```

- this will cause an issue so make sure to wrap the whole conditional in parentheses