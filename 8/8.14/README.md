- to be able to use any of the random features in c++, `#include <random>`
- `mt19937` is for 32 bit and `mt19937_64` is for 64 bit (both unsigned ints)

```cpp
std::mt19937 mt{};

	// Create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution die6{ 1, 6 }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };
```

- you can use this to roll a dice

```cpp
// Seed our Mersenne Twister using steady_clock
	std::mt19937 mt{ static_cast<std::mt19937::result_type>(
		std::chrono::steady_clock::now().time_since_epoch().count()
		) };
```

- this is seeding using the system clock

- use `std::random_device` for seeding since its random
- we don't use that instead of mersenne twister because it might not be performant and it might eliminate numbers from the pool/ take time to get new numbers

- best practice: only seed once
- once you seed one more time, the results may not be random at all or less random

- the `std::mt19937` includes ONLY 32 bit numbers (624 of them)
- while `std::mt19937_64` includes ONLY 64 bit numbers (312 of them)
- regular `std::mt19937` uses `std::uint_fast32_t`, which can default to 32 bit or 64 bit depending on architecture

- if your random number generator is outputting the same numbers, then you havent seeded it