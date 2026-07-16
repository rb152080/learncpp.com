```cpp
void incrementAndPrint()
{
    static int s_value{ 1 }; // static duration via static keyword.  This initializer is only executed once.
    ++s_value;
    std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible because it goes out of scope
```

- every time you call the function it'll print 2, 3, 4, ...

- best practice: you should prefix static variables with `s_`

- static local variable has block scope (like a local variable) and lifetime is the duration of the program (like a global variable)

quiz
1. static for a local variable makes it be initialized only once in the entire program's duration (static duration); static for a global variable makes it only be accessible within that file (internal linkage)