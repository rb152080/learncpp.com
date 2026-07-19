- doing `while (count < 10);` (putting a semicolon after) will hang your program

- `i, j, k` became loop variables because they were the shortest integral variable names in Fortran programming language

- in a `while` loop, it's better for the variable to be signed rather than unsigned; if it's unsigned, it will overflow if you're doing `var--`/ `--var`

- best practice: declare variables in smallest scope possible