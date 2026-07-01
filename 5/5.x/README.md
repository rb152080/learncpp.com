quiz
1. 
- named constants are better than literal constants because there is some meaning behind the value, which will help a programmer know why it is used (magic numbers make it harder to understand things in the code, naming them will give it meaning and lets you know what they represent)
- `const`, `constexpr` are better than `#define` macros because they don't cause issues when other files are combined (macros don't show up in debuggers and there could be naming conflicts)

3. 
- `std::string_view` is read only, best used if you are not going to change anything or to pass in as a parameter; `std::string` always makes copies (`std::string` is a modifiable string which is expensive to initialize and copy; you can also initialize `std::string_view`, its cheap to initialize and copy; the problem with `std::string_view` is if what its pointing to is destroyed before the `std::string_view` object)
- dangling pointers can go wrong when using `std::string_view`