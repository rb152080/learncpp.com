#include <iostream>
#include <typeinfo>

int main()
{
    auto x { 0.0 };
    auto y { 0.0f };
    float z {0.0};
    std::cout << typeid(x).name() << "\n";
    std::cout << typeid(y).name() << "\n";
    std::cout << typeid(z).name() << "\n";
    return 0;
}
