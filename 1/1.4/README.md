```c++
int a; // default initialization
int b = 5; // copy initialization
int c (6); // direct initialization
int d { 7 }; // direct list initialization               <- preferred
int e { }; // value initialization, zero initialization  <- preferred
```

- `{ }` doesn't allow narrow conversion
- it is called **list initialization**
- it can be a list of 1 element

```c++
int x { 0 }; // when you're going to use this value
int x { }; // when you're going to change the value immediately, prev value 
           // doesn't matter
```

```c++
int a, b = 5; // this doesn't work, a is left uninitialized
```

introduced in c++17

```cpp
[[maybe_unused]] double gravity { 9.8 }; 
```

quiz
1. difference between initialization and assignment: initialization declares the variable, assignment gives it a value (initialization gives variable default value when its created, assignment gives value after creation)
2. direct list initialization is preferred (aka direct brace initialization)
3. default initialization is when you do `{ }`, value initialization is when you do `{ 0 }`; first behavior is it will give it some default value, you do it when you don't need to use it; second behavior is it will give it the value you put, and you do it when you need to use the value (got mixed up with direct list and value; default initialization is when you do `int x;` here there is no initializer, some garbage value; value initialization is when you do `int x {};` this will do 0 initialization, you should do value/zero initialization)