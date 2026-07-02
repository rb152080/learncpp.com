- use `%` modulo against `0`, works without worrying about negative and positive numbers

```cpp
assert(exp >= 0 && "powint: exp parameter has negative value");
```

- how this works is that everything in the parentheses gets printed if the first part evaluates to false
- the second part will always evaluate to true since its a non-empty string
- if the `assert()` is true, then the program continues; if not it prints out the line and stops

good to know:

```cpp
if (exp & 1)  // if exp is odd
```