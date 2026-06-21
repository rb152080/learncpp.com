- best practice: use a fixed-width int type when you know its going to be in a certain range

```cpp
std::int32_t x { 32767 };
```

- `std::int8_t` and `std::uint8_t` typically behave like chars

```cpp
std::int_least8_t
std::uint_fast16_t
```

- best practice: avoid "least" and "fast"; they may be different sizes on different architectures
- avoid `short` and `long`; use fixed width integer types

- if you use `std::size_t`, use `<cstddef>`
- - The 8-bit fixed-width integer types (prefer a 16-bit fixed-width integer type instead). 
	- this is because they (8-bit fixed-width integer types) are chars