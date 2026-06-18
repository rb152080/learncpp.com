- you can use macros/ preprocessor directives

```cpp
#define ENABLE_DEBUG // comment out to disable debugging

int getUserInput()
{
	#ifdef ENABLE_DEBUG
	std::cerr << "getUserInput() called\n";
	#endif
.
.
.
}
```

- this way you can only do it in one spot

- you can also use `std::clog`, which you can redirect to a file
- by default it goes to where `std::cerr` goes (standard error stream)

- you can also do:
```cpp
#include <plog/Log.h> // Step 1: include the logger headers

void func() 
{
	PLOGD << "getUserInput() called"; // PLOGD is defined by the plog library
}

int main()
{
	plog::init(plog::debug, "Logfile.txt"); // Step 2: initialize the logger
	PLOGD << "main() called"; // Step 3: Output to the log as if you were
								// writing to the console
}
```

