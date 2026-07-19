- c++17 added `[[fallthrough]]`
- it's like a null statement, except intentional so it doesn't throw warnings

instead of doing:

```cpp
return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
```

do this:

```cpp
switch (c)
    {
    case 'a': // if c is 'a'
    case 'e': // or if c is 'e'
    case 'i': // or if c is 'i'
    case 'o': // or if c is 'o'
    case 'u': // or if c is 'u'
    case 'A': // or if c is 'A'
    case 'E': // or if c is 'E'
    case 'I': // or if c is 'I'
    case 'O': // or if c is 'O'
    case 'U': // or if c is 'U'
        return true;
    default:
        return false;
    }
```

- you can't initialize variables in a switch before or after the case labels


- best practice: if you're going to define variables in a case statement, do it in a block (`{}`)