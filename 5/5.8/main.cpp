#include <iostream>
#include <string>
#include <typeinfo>
#include <string_view>

int main()
{
    using namespace std::string_literals;
    auto s1 = "hello";
    std::cout << typeid(s1).name() << "\n";
    auto s2 = "hello"s;
    std::cout << typeid(s2).name() << "\n";
    std::string_view s3 = "hello";
    std::cout << typeid(s3).name() << "\n";
    return 0;
}
