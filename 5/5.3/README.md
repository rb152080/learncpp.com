- c++14 allowed `0b` for binary

```cpp
long value { 2'132'673'462 }; // much easier to read than 2132673462
```

- this lets us output binary:
```cpp
#include <bitset> // for std::bitset

int main()
{
	// std::bitset<8> means we want to store 8 bits
	std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
	std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101
}
```

```cpp
#include <format> // C++20
#include <print> // C++23

std::println("{:b} {:#b}", 0b1010, 0b1010); // 1010 0b1010
```

- 32 in binary is 100000
	- 5 0s since rightmost index is 0