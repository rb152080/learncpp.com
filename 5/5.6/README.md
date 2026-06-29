- `const` basically means it is read only; the value of the initializer can be known at run time or compile time; const can be evaluated at run time
- `constexpr` means that the value of the initializer has to be known at compile time; constexpr object can be evaluated at run time or compile time
	- if both `constexpr`, then it is evaluated at compile time
- `constexpr` is `const`, not the other way around
- `constexpr` is not part of the object's type, so if it is `constexpr`, it is actually `const`

- if the initializer is `const` -> `constexpr`
- if not -> `const`
 
- `std::string` and `std::vector` are not compatible with `constexpr`
	- so make them `const`
	- or pick a different version (`std::string_view`, `std::array`)


