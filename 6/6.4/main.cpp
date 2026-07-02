#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    // for (int i {}; i < 5; i++)
    //     std::cout << i << "\n";
    // std::cout << "other\n";
    // for (int i {}; i < 5; ++i)
    //     std::cout << i << "\n";

    int x { 5 };
    int value { add(x, ++x) }; // undefined behavior: is this 5 + 6, or 6 + 6?
    // It depends on what order your compiler evaluates the function arguments
    // in

    std::cout << value << '\n'; // value could be 11 or 12, depending on how the
                                // above line evaluates!

    return 0;
}
