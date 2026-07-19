- traditionally, switch tables were made using jump tables

```cpp
// Preferred version
void printDigitName(int x)
{
    switch (x)
    { // you don't want to nest whats inside this
    case 1: // not indented from switch statement
        std::cout << "One";
        return;
    case 2:
        std::cout << "Two";
        return;
    case 3:
        std::cout << "Three";
        return;
    default:
        std::cout << "Unknown";
        return;
    }
}
```



