# Programming in C

A collection of standalone C practice programs, topic examples, and algorithm exercises.

## Topics

### C fundamentals
- Output, variables, constants, basic arithmetic, and input: `Hello.c`, `sum.c`, `sub.c`, `multiply.c`, `div.c`, `sizeof.c`, `circle.c`, `rectangle.c`, `cylinder.c`, `SI.c`, `temperature.c`
- Decisions and conditions: `char.c`, `grade.c`, `greater.c`, `leap.c`, `month.c`, `week.c`, `tax.c`
- Loops and control flow: `do_while.c`, `break&continue.c`, `natural_num.c`, `natural_num_forLoop.c`, `table.c`, `table_reverse.c`
- Functions and recursion: `function1.c`, `fac_fun.c`, `fibonacci.c`, `sum_fun.c`
- Number problems and patterns: `armstrong.c`, `prime_num.c`, `prime.c`, `odd&even.c`, `factorial.c`, `factorial_while.c`, `pattern.c`, `pattern_fun.c`
- Small projects: `Project1.c`, `Project_01/number_guess.c`

### Core topics added
The `topics/` directory contains focused examples for arrays, two-dimensional arrays, strings, pointers, structures and unions, file handling, and dynamic memory allocation.

### Data structures and algorithms
- Sorting: merge sort (`daa1.c`), quicksort (`daa2.c`), and heapsort (`daa3.c`)
- Greedy algorithms: fractional knapsack (`daa4.c`)
- Graph traversal: BFS and DFS (`daa5.c`)
- Shortest paths: Dijkstra's algorithm (`daa6.c`)
- Minimum spanning tree: Prim's algorithm (`daa8.c`)
- Pattern matching: brute-force search (`daa9.c`)
- Binary search tree: insertion and traversal (`daa10.c`)
- Linked list practice: `node.c`

## Compile and run

Each source file is a separate program with its own `main` function. Compile one file at a time with a C compiler such as GCC:

```sh
gcc topics/arrays.c -o arrays
./arrays
```

On Windows, the executable can use an `.exe` extension:

```powershell
gcc .\topics\arrays.c -o .\arrays.exe
.\arrays.exe
```

Some older exercises use compiler-specific headers, and `armstrong.c` may need to be linked with the math library on Unix-like systems (`-lm`).

The file-handling example creates `programming_in_c_demo.txt` in the program's current working directory when run.