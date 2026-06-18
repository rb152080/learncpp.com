#include <iostream>

int getValue() { return 4; }

int main()
{
    std::cout << getValue << '\n';   // 1
    std::cout << getValue() << '\n'; // 4
    // clang-format off
    std::cout<<"testing\n";
    // clang-format on
    return 0;
}
