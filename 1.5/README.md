- `cout`, `cin`, `endl` are in `iostream` (input output)
- `cout` means character output; can print text, numbers, or variables

- `cout` messages are buffered into a buffer (region of memory) to be output to the console at a given time (similar to how a train comes and picks up passengers)
- the buffer is **flushed** periodically
	- problem with this is that any data in the buffer can be prevented from being outputted if there is an error and the program crashes

- buffering data is faster
	- minimizes the number of times the request to output data is made

`std::endl` is inefficient
- outputs a `\n` 
- flushes the buffer each time

we should let it flush itself

output a newline without flushing:
- `\n`

best practice: use `\n` rather than `std::endl`

```c++
int x {};
int y {};
std::cin >> x >> y;
```

2 ways:
1. you can press enter after each one
2. put a space in between them

3 ways actually: tabs, spaces, newlines:
```
1. 4    5
2. 4 5
3. 4
   5
```

- `std::cin` is buffered; you can enter all the info at once and it will split it up and assign it to variables

quiz
1. 
```c++
int x{};
std::cin >> x;
```

- if you enter a `h`, 0 is stored
- if you enter a `3.2`, it casts to an int (fractions is ignored, not rounded. the .2 is still there to be extracted later)
- if you enter `123abc`, it extracts `123` and buffers `abc` for later
- if you enter `abc123`, 0 gets stored; same as single letter
- `+5`: the `+` is a valid symbol just like a `-`, so 5 gets stored