- best practice: don't use `signed` prefix or `int` suffix

quiz
1. range of a 5-bit signed int would be:
	- 5 bits = $2^5 = 32$ numbers
	- since its signed, the range would be -16 to 15
		- so this would be $-2^{5-1}$ to $2^{5 - 1} - 1$ 
	- if it were unsigned, the range would be 0 to 31
		- so 0 to $2^5 - 1$
2. -13/5 is -2 . something, the answer is -2, since the decimal part gets dropped