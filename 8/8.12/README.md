- function `std::exit()`
	- static storage duration objects are destroyed when it is called

- functions `std::atexit()` will be called on exit

- `std::exit()` in `<cstdlib>`

- `std::quick_exit()` and `std::at_quick_exit()` are for multi-threaded programs and they don't clean up static objects; normally if you call `std::exit()` or `std::atexit()`, the thread calling it can crash the program since other threads might need to access those objects

- `std::abort()` happens on abnormal termination, for example when you divide by 0

- best practice: don't use halts, use exceptions`