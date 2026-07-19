```cpp
if (true)
    {
        int x{ 5 };
    } // x destroyed here
    else
    {
        int x{ 6 };
    } // x destroyed here
```

- block scoped, this is why it doesn't work

- `if constexpr` is a variation of an `if` statement

- best practice: use `{}` even in single line blocks