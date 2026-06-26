quiz
1. a.

```cpp
char a { 'q' };
```

- the initializer is `'q'`, and it is const because it is a literal
- the variable is `a` and it is not const since it's not marked as const

c.

```cpp
const double c { 5.0 };
```

- `5.0` is const because it's a literal
- `c` is not because it isn't an integral type, use `constexpr` instead

d.

```cpp
const int d { a * 2 }; // a defined as char a { 'q' };
```

- since `a` isn't const, `a * 2` isn't either, so `d` isn't either

e. 

```cpp
int e { c + 1.0 }; // c defined as const double c { 5.0 };
```

- everything not const here either

- variable is not const if the initializer is not const

h.

```cpp
const int h{};
```

- `{}` is const since it initializes to 0, which is the default for int type
- `h` is const as well