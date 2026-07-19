common issue:

```cpp
if (nuclearCodesActivated()); // note the semicolon at the end of this line
    blowUpTheWorld();
```

```cpp
if (nuclearCodesActivated())
    ; // the semicolon acts as a null statement
blowUpTheWorld(); // and this line always gets executed!
```

like `pass` in python:

```cpp
#define PASS

void foo(int x, int y)
{
    if (x > y)
        PASS;
    else
        PASS;
}

int main()
{
    foo(4, 7);

    return 0;
}
```

- it gets rendered as a null statement

when you do:

```cpp
 if (x = 0) // oops, we used an assignment here instead of a test for equality
        std::cout << "You entered 0\n";
    else
        std::cout << "You entered 1\n";
```

it always outputs: "You entered 1\n"

- `x = 0` executes, which assigns `0` to `x`
- then it evaluates `x` which is `0` or `false`