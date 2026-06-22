quiz
1. an early return is when you return early from a function. you usually do it when you have satisfied the condition early and are done (an early return is a return statement that occurs before the last line of the function, returns to the caller immediately)

```cpp
if (height >= 140.0)
	return true;
else
    return false;
    
// you never need all that

// you can just do this
return height >= 140.0;
```