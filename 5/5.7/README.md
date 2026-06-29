- `std::string_view` introduced in C++17
- `std::string` and `std::string_view` are class types

- `std::cin` doesn't work properly for `std::string`s, using `std::getline` instead

```cpp
std::cout << "Enter your full name: ";
std::string name{};
std::getline(std::cin >> std::ws, name); // read a full line of text into name
```

- `std::ws` ignores any leading whitespace (newlines, tabs, spaces) 

- `var.length()` for length of a string
- because we do `.length()` instead of `length(var)`, it is a **member function**
- returns `size_t` by default, you have to `static_cast<int>` if you want to
- in C++20, you can do `std::ssize(var)`

- `std::string` is copied, so don't pass by value; use `std::string_view` instead

- typically, returns make a copy of the thing you are returning, but it is ok to return a `std::string` because of move semantics

- making `std::string` `const` also prevents a copy

```cpp
    using namespace std::string_literals; // easy access to the s suffix

    std::cout << "foo\n";   // no suffix is a C-style string literal
    std::cout << "goo\n"s;  // s suffix is a std::string literal
```