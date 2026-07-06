- best practice is to avoid using `,` except in `for` loops

```c++
// Moving two pointers (i goes up, j goes down) simultaneously
for (let i = 0, j = 10; i < j; i++, j--)
```

```cpp
constexpr int z{ 3 }, w{ 5 }; // Separator comma used to separate multiple variables being defined on the same line (don't do this)
```