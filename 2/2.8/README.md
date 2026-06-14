- you can't have multiple definitions `void foo() { }`, you can have multiple declarations `void foo();`
- that's why its called **ODR (one definition rule)**

- you can compile 2 files together by doing:

```bash
g++ input.cpp main.cpp
```
