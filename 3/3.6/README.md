- for debugging, you can do:
```cpp
std::cout << std::unitbuf; // enable automatic flushing for std::cout (for debugging)
```

- you can put them in preprocessor directives
```cpp
#ifdef DEBUG
std::cout << std::unitbuf; // enable automatic flushing for std::cout (for debugging)
#endif
```
