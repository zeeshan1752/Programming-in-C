# Programming in C

A hands-on collection of standalone C exercises, focused topic examples, small projects, and selected data-structure and algorithm implementations.

Use it as a learning path: start with the short programs in the repository root, continue through the focused examples in ```topics/```, then explore ```data_structures/``` and ```algorithms/```.

## Learning path

| Stage | What you will practice | Start here |
|---|---|---|
| 1. Basics | Output, variables, input, arithmetic, and data types | ```hello_world.c```, ```addition.c```, ```integer_division.c```, ```data_type_sizes.c``` |
| 2. Decisions and loops | Conditions, switch statements, loops, and patterns | ```grade_calculator.c```, ```days_in_month.c```, ```natural_numbers_for_loop.c```, ```break_and_continue.c``` |
| 3. Functions | Reusable functions, recursion, and number sequences | ```average_of_three_numbers.c```, ```factorial_recursive.c```, ```fibonacci_sequence.c``` |
| 4. Core C | Arrays, strings, pointers, structures, unions, and memory | Examples in ```topics/``` |
| 5. Data structures | Linked lists, stacks, queues, and binary search trees | ```data_structures/```, ```topics/stack.c```, ```topics/queue.c``` |
| 6. Algorithms | Searching, sorting, graph algorithms, and backtracking | ```algorithms/```, ```topics/searching.c``` |

## Repository map

- Root ```*.c``` files: beginner exercises for arithmetic, conditions, loops, functions, and patterns.
- ```topics/```: focused examples of common C language features and data structures.
- ```projects/```: number-guessing game variations.
- ```data_structures/```: linked-list practice.
- ```algorithms/```: sorting, graph, greedy, tree, and backtracking examples.
- ```algorithms/eight_queens.cpp``` is the one C++ example; the other algorithm examples use C.

## Topic examples

| Topic | Example |
|---|---|
| Arrays and matrices | ```topics/arrays.c```, ```topics/matrix_addition.c``` |
| Strings | ```topics/strings.c``` |
| Pointers and swapping | ```topics/pointers.c``` |
| Structures and unions | ```topics/structures_unions.c``` |
| Dynamic memory | ```topics/dynamic_memory.c``` |
| File input/output | ```topics/file_handling.c``` |
| Linear and binary search | ```topics/searching.c``` |
| Stack and circular queue | ```topics/stack.c```, ```topics/queue.c``` |
| Enumerations and typedef | ```topics/enums_typedef.c``` |
| Bitwise operators | ```topics/bitwise_operators.c``` |
| Command-line arguments | ```topics/command_line_arguments.c``` |

## Algorithms

- Sorting: merge sort, quicksort, and heapsort.
- Greedy optimization: fractional knapsack.
- Graphs: breadth-first search, depth-first search, Dijkstra shortest paths, and Prim minimum spanning tree.
- Strings: brute-force pattern matching.
- Trees: binary search tree insertion, search, and in-order traversal.
- Backtracking: eight queens in C++.

Every algorithm source has a descriptive filename under ```algorithms/```.

## Build and run

Install a C compiler such as GCC, Clang, or MinGW-w64. Each source file is a separate program with its own ```main```; compile one file at a time.

On Linux or macOS:

```sh
gcc -std=c11 -Wall -Wextra -pedantic hello_world.c -o hello_world
./hello_world
```

On Windows PowerShell:

```powershell
gcc -std=c11 -Wall -Wextra -pedantic .\hello_world.c -o .\hello_world.exe
.\hello_world.exe
```

Compile the C++ example with a C++ compiler:

```sh
g++ -std=c++17 -Wall -Wextra -pedantic algorithms/eight_queens.cpp -o eight_queens
./eight_queens
```

For example, to try the array lesson, replace ```hello_world.c``` with ```topics/arrays.c``` and choose a matching output name. The command-line arguments example accepts extra words after the executable name.

## Notes

- Do not compile all source files into one executable: they contain separate ```main``` functions.
- The examples use standard C library headers and C11 compiler settings. Some compilers may also accept them with C99.
- ```topics/file_handling.c``` creates or overwrites ```programming_in_c_demo.txt``` in the current working directory.
- ```progressive_tax_example.c``` uses made-up teaching brackets to demonstrate progressive calculations; it is not current tax guidance.
- This is a growing study collection rather than an exhaustive C reference. Advanced areas such as function pointers, concurrency, networking, and operating-system programming are outside its current scope.
