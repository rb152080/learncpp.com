- `++x` increments x and then returns it
- `x++` makes a copy of x, increments the copy, and then returns the copy
- same thing with `--`

```cpp
#include <iostream>

int main()
{
    int x { 5 };
    int y { x++ }; // x is incremented to 6, copy of original x is evaluated to the value 5, and 5 is assigned to y (since its the copy)

    std::cout << x << ' ' << y << '\n';
    return 0;
}
```

- best practice is to use the prefix versions/ operators over the postfix versions

```cpp
int x { 5 };
int value{ add(x, ++x) }; // undefined behavior: is this 5 + 6, or 6 + 6?
// It depends on what order your compiler evaluates the function arguments in
// evaluates to 12 on my computer

std::cout << value << '\n'; // value could be 11 or 12, depending on how the above line evaluates!
```

- "C++ does not define the order of evaluation for function arguments or the operands of operators."
- it can cause side effects and undefined behavior