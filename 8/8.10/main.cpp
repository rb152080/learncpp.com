#include <iostream>

int main(void)
{
    constexpr int max_val = 10;
    // for (int i { 0 }; i < max_val; i++)
    //     std::cout << i << "\n";
    // for (int i { 0 }; i < max_val; ++i)
    //     std::cout << i << "\n";
    for (int i { 0 }; i != max_val; ++i) // uses !=
        std::cout << i;
    return 0;
}
