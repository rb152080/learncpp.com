```cpp
int main()
{
    int x { 2 }; // local variable, no linkage

    {
        int x { 3 }; // this declaration of x refers to a different object than the previous x
    }

    return 0;
}
```

- best practice: define variables only in the scope that they are needed

quiz

2. a variable's scope is where it exists, duration is how long (time), lifetime is dependent on whether its read only, const, etc, like in the read-only or bss. local variables have the scope of its block, duration is however long that scope exists

- correct answer: scope determines where the variable is accessible in the code. duration is the rules that determine when a variable is created or destroyed (so like scope based or program lifetime). lifetime is the actual time between time created and time destroyed. local variables are block scoped. local variables have automatic (storage) duration, so they are created when they are defined and destroyed when its the end of their block 