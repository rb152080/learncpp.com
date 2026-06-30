- `std::string_view` introduced in C++17 (`#include <string_view> `)
	- the goal is to reduce `std::string` copying

- use `std::string_view` as function parameter and when you want it to be read only

- you can use `"string"sv` for `std::string_view`

- you can make `std::string_view` `constexpr`
