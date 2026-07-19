- for loops are evaluated in 3 parts

1. the first statement is the initialization; it happens once; it has block scope for that for loop
2. the second statement is the check that happens at each iteration; if it is true, the loop runs, if it is false it goes to after the for loop
3. the third statement gets executed after everything in the for loop

- avoid using `!=` in a for loop

you can do:

```cpp
for (int x{ 0 }, y{ 9 }; x < 10; ++x, --y)
```

and this is the only place you should use `,` for variable initializations