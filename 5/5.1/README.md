- C style const variables: `EARTH_GRAVITY`
- C++ style: `kEarthGravity`

- best practice: don't use const for value parameters (in a function pass by value)
```cpp
void printInt(const int x)
{
    std::cout << x << '\n';
}

int main()
{
    printInt(5); // 5 will be used as the initializer for x
}
```

- best practice: don't return a const value
```cpp
const int getValue()
{
    return 5;
}

int main()
{
    std::cout << getValue() << '\n';
}
```

- prefer const variables to preprocessor macros
	- preprocessor (part of the compilation process) macros are replaced everywhere in the file; can lead to weird behavior