```cpp
namespace // unnamed namespace
{
    void doSomething() // can only be accessed in this file
    {
        std::cout << "v1\n";
    }
}

int main()
{
    doSomething(); // we can call doSomething() without a namespace prefix

    return 0;
}
```

its the same as doing:

```cpp
static void doSomething() // can only be accessed in this file
{
    std::cout << "v1\n";
}
```

- you shouldn't put unnamed namespaces in header files

- inline lets you bypass the ODR and it replaces the call with the actual function