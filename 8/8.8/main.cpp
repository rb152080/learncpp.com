#include <iostream>

int main(void)
{
    constexpr int upper { 5 };
    constexpr int lower { 1 };
    int outer { lower };
    while (outer <= upper)
    {
        int inner { upper };
        while (inner >= lower)
        {
            if (inner > outer)
                std::cout << "  ";
            else
                std::cout << inner << " ";
            --inner;
        }
        std::cout << "\n";
        ++outer;
    }
    return 0;
}
