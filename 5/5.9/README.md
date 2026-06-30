- prefer `std::string_view` over `const std::string&`

```c++
std::string_view sv{};
{
	std::string s{ "Hello, world!" };
	sv = s;
} // s goes out of scope

std::cout << sv << '\n'; // this is undefined behavior
// prints out fine on my computer, but can be different on other computers
```

```c++
std::string getName()
{
    std::string s { "Alex" };
    return s;
}

int main()
{
  std::string_view name { getName() };
  std::cout << name << '\n'; // this is also undefined behavior
  // std::string_view just has pointers to it in memory but it is technically out of scope after the function call
  // works fine on my computer though
}
```

- both of these code snippets are examples of dangling pointers, which means undefined behavior

```cpp
using namespace std::string_literals;
    std::string_view name { "Alex"s }; // "Alex"s creates a temporary std::string
    std::cout << name << '\n'; // this is also undefined behavior
```

- this is also undefined because inside the `{ }`, it creates a temporary `std::string`

```cpp
#include <iostream>
#include <string>
#include <string_view>

std::string_view getBoolName(bool b)
{
    std::string t { "true" };  // local variable
    std::string f { "false" }; // local variable

    if (b)
        return t;  // return a std::string_view viewing t

    return f; // return a std::string_view viewing f
} // t and f are destroyed at the end of the function

int main()
{
    std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n'; // undefined behavior

    return 0;
}
```

- this is undefined behavior because `t` and `f` are local variables to the function and are stored on the stack
- but when the function terminates, that stack disappears

```cpp
#include <iostream>
#include <string_view>

std::string_view getBoolName(bool b)
{
    if (b)
        return "true";  // return a std::string_view viewing "true"

    return "false"; // return a std::string_view viewing "false"
} // "true" and "false" are not destroyed at the end of the function

int main()
{
    std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n'; // ok

    return 0;
}
```

- here, they are stored in the read-only data segment

- `.remove_prefix(int num)` removes characters from the left side
- `.remove_suffix(int num)` removes characters from the right side 
- these are permanent changes, they get permanently removed, so it updates the string

```
/usr/include/c++/16.1.1/string_view:305: constexpr void std::basic_string_view<_CharT, _Traits>::remove_prefix(size_type) [with _CharT = char; _Traits = std::char_traits<char>; size_type = long unsigned int]: Assertion 'this->_M_len >= __n' failed.
zsh: abort (core dumped)  ./a.out
```

- this is what happens if you call `s.remove_prefix(1)` on an empty string (`std::string_view s {}`)

- `sizeof(std::string_view)` = 16 bytes; 1 `const char*` and 1 `size_t`

- `std::string_view` may or may not be null-terminated, so don't assume it is