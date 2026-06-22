```c++
auto x { 0.0 };
auto y { 0.0f };
float z {0.0};
std::cout << typeid(x).name() << "\n"; // d
std::cout << typeid(y).name() << "\n"; // f
std::cout << typeid(z).name() << "\n"; // f

```

- `x` by default if you don't specify the `f` is a `double`
- you can also not cast it as `auto`

- best practice: use `double` over `float`; more precision