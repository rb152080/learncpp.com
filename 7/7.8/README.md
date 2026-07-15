- don't use non const global variables

- best practice: use local variables instead of global variables whenever possible

1. static initialization:
	- constant initialization -> constexpr
	- global variables without initializers are initialized to 0

2. dynamic initialization:
	- variables without constexpr are initialized

- you can prefix global variables with `g_`

- you should make global variables `static` so that they're only able to be called within the file