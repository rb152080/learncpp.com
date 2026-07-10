- to make global variables external, use the `extern` keyword

```cpp
int g_x { 1 };        // extern by default
extern int g_x { 1 }; // explicitly extern (may cause compiler warning)
```

you don't need to specify that its extern, since its extern by default

quiz

- a variable's scope is how long its there in memory, duration is based on type of variable (automatic), linkage is internal or external and that depends on things like const; global variables have file scope/ global namespace scope, duration is the entire lifetime of the program, and linkage is dependent on things like const, but if its not const then its external

- correct answer: scope is where the variable is accessible, duration is when its created and destroyed, linkage is whether or not it can be exported to another file; global scope, static duration (created when the program starts and destroyed when it ends), static and extern keywords can determine whether they are internal or external