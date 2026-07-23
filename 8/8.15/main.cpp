#include "random.h"
#include <iostream>

int main(void)
{
    // doesn't work, must be of integral type
    std::cout << Random::get(0.0f, 1.0f) << "\n";
    return 0;
}
