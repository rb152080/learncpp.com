- `inline` variables/ functions are good for header only libraries

quiz
1. `if`/ `for` blocks need `{}` if more than 1 line

3b. shortcomings of

```cpp
static int sum{ 0 };
```

- that variable is declared once and doesn't live in the heap or stack
- you can make it constexpr?
- you can do the printing in the function itself

answers:
1. you can't reset it unless you restart the program; i mean technically you can by just setting it equal to 0
2. you can't have multiple accumulators; who would've thought of that