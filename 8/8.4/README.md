if you have:

```cpp
constexpr double gravity{ 9.8 };

if (gravity == 9.8) // this is always true
```

- wasteful to execute this at runtime, do it at compile time instead so use `constexpr if` statements (introduced in c++17)

- best practice: use `constexpr if` statements when possible