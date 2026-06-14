```c++
void goo(); // this is a function declaration
			// no function body

void foo() {
    goo();
}

void goo() {
    foo();
}


int main() {
    foo();
    return 0;
}
```

- the above code snippet would cause a stack overflow/ segmentation fault

- in a function declaration, you don't need to give names to the parameters, you can do this: `int add(int, int);`
- but best practice is to keep the names so you know what they are/ do

quiz
1. a function prototype is a function declaration (without the body)
2. forward declaration is ? (the same thing as a function prototype, it tells that something exists without it being defined; think about definition vs declaration)

- there is a compiler error if `main()` calls a function that is not defined
- there is a linker error if you declare a function but don't define it (provide a body)
- if you declare a function, but don't use it, there is no error