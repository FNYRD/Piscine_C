# C Piscine — 42 School

**User:** `jericard`

This repository contains the completed assignments from the **42 School C Piscine**. Each module introduces a new set of concepts, building progressively toward systems programming competency.

---

## Index

- [shell00 — Unix Shell & Git Basics](#shell00--unix-shell--git-basics)
- [shell01 — Shell Scripting](#shell01--shell-scripting)
- [C00 — First Steps in C](#c00--first-steps-in-c)
- [C01 — Pointers](#c01--pointers)
- [C02 — String Manipulation](#c02--string-manipulation)
- [C03 — String Operations](#c03--string-operations)
- [C04 — Number & String I/O](#c04--number--string-io)
- [C05 — Recursion & Algorithms](#c05--recursion--algorithms)
- [C06 — Command-Line Arguments](#c06--command-line-arguments)
- [C07 — Dynamic Memory Allocation](#c07--dynamic-memory-allocation)
- [C08 — Header Files & Data Structures](#c08--header-files--data-structures)
- [rush00 — Rectangle Drawing (Rush Project)](#rush00--rectangle-drawing-rush-project)
- [rush01 — Puzzle Solver (Rush Project)](#rush01--puzzle-solver-rush-project)

---

## shell00 — Unix Shell & Git Basics

**Objective:** Introduction to the Unix command line and Git version control. Covers file creation, permissions, SSH key generation, the `ls`, `find`, and `git` commands, archive management with `tar`, and understanding `.gitignore` patterns. The goal is to become comfortable navigating and operating a Unix system before writing any C code.

| Exercise | Main concept |
|----------|-------------|
| `z` | Creating a file with a specific character |
| `testShell00.tar` | Creating tar archives |
| `exo2/` | Directory and file structure management |
| `id_rsa_pub` | SSH key generation and public key format |
| `midLS` | `ls` flags: `-p` (dirs), `-t` (sort by time), `-m` (comma-separated) |
| `git_commit.sh` | `git log --format="%H" -n 5` — listing commit hashes |
| `git_ignore.sh` | `git ls-files --ignored` — listing ignored files |
| `clean` | `find` with `-name "*~"` patterns to delete backup files |
| `ft_magic` | File type identification with magic numbers |

---

## shell01 — Shell Scripting

**Objective:** Writing practical shell scripts using pipes, text processing tools, and system utilities. Covers the `id`, `find`, `ifconfig`, `awk`, `sed`, `tr`, and `wc` commands. The exercises focus on chaining commands with pipes to extract and transform information from the system.

| Exercise | Main concept |
|----------|-------------|
| `print_groups.sh` | `id -nG` + `tr` to list user groups comma-separated |
| `find_sh.sh` | `find` + `sed` to list shell scripts without extension |
| `count_files.sh` | `find \| wc -l` to count all files in a directory tree |
| `MAC.sh` | `ifconfig` + `grep -E` with hex regex to extract MAC addresses |
| Special filename file | Handling shell special characters in filenames |
| `skip.sh` | `ls -l \| awk 'NR%2!=0'` to print only odd-numbered lines |

---

## C00 — First Steps in C

**Objective:** Write the very first C programs using only the `write()` system call. Covers function definition, character output, ASCII arithmetic, loops (while), and conditional statements (if/else). By the end, students can print characters, digits, and their combinations using controlled iteration.

| Exercise | Main concept |
|----------|-------------|
| `ft_putchar.c` | `write(1, &c, 1)` — outputting a single character |
| `ft_print_alphabet.c` | While loop printing `a` to `z` via ASCII values |
| `ft_print_reverse_alphabet.c` | Decrement loop: `z` down to `a` |
| `ft_print_numbers.c` | Printing digits `0` through `9` |
| `ft_is_negative.c` | `if/else` conditional: print `N` or `P` based on sign |
| `ft_print_comb.c` | Nested loops to print all unique 3-digit combinations (012 to 789) |

---

## C01 — Pointers

**Objective:** Build a deep understanding of pointers in C. Covers single and multi-level pointer dereferencing, passing pointers as function parameters (pass-by-reference), pointer arithmetic for string traversal, array manipulation with pointers, and classic algorithms like swap and bubble sort.

| Exercise | Main concept |
|----------|-------------|
| `ft_ft.c` | Dereferencing a pointer and assigning value `42` |
| `ft_ultimate_ft.c` | 9-level nested pointers (`*********`) |
| `ft_swap.c` | Swapping two integers via pointer parameters |
| `ft_div_mod.c` | Division and modulo results via output pointer parameters |
| `ft_ultimate_div_mod.c` | In-place modification of pointer values with `%=` and `/=` |
| `ft_putstr.c` | Printing a string character by character with pointer iteration |
| `ft_strlen.c` | Counting characters until null terminator |
| `ft_rev_int_tab.c` | Reversing an integer array in place (two-pointer technique) |
| `ft_sort_int_tab.c` | Bubble sort on an integer array |

---

## C02 — String Manipulation

**Objective:** Implement string operations from scratch by working at the character level. Covers copying strings with and without length limits, validating string content (alphabetic, numeric, printable), and converting character case using ASCII arithmetic.

| Exercise | Main concept |
|----------|-------------|
| `ft_strcpy.c` | Copying a null-terminated string to a destination buffer |
| `ft_strncpy.c` | Copying up to `n` characters, padding remaining bytes with `\0` |
| `ft_str_is_alpha.c` | Validating that every character is A-Z or a-z |
| `ft_str_is_numeric.c` | Validating that every character is 0-9 |
| `ft_str_is_lowercase.c` | Checking for all-lowercase string |
| `ft_str_is_uppercase.c` | Checking for all-uppercase string |
| `ft_str_is_printable.c` | Checking that all characters fall in ASCII range 32-126 |
| `ft_strupcase.c` | Converting lowercase letters to uppercase (subtract 32) |
| `ft_strlowcase.c` | Converting uppercase letters to lowercase (add 32) |

---

## C03 — String Operations

**Objective:** Implement the standard library's string comparison, search, and concatenation functions from scratch. Introduces the concept of lexicographic comparison, bounded operations with `n`-limited variants, and substring searching with pattern matching logic.

| Exercise | Main concept |
|----------|-------------|
| `ft_strcmp.c` | Lexicographic string comparison (returns difference of first differing bytes) |
| `ft_strncmp.c` | Limited comparison of only the first `n` characters |
| `ft_strcat.c` | Appending a source string to the end of a destination string |
| `ft_strncat.c` | Appending only the first `n` characters of source to destination |
| `ft_strstr.c` | Finding the first occurrence of a substring within a string |

---

## C04 — Number & String I/O

**Objective:** Write the building blocks for text and number output in C. Covers printing entire strings with `write()`, converting integers to their character representation (including negative numbers) using recursion, and parsing a string into an integer while handling whitespace, signs, and non-digit characters (`atoi`).

| Exercise | Main concept |
|----------|-------------|
| `ft_strlen.c` | String length via pointer traversal |
| `ft_putstr.c` | Printing a full string with `write()` |
| `ft_putnbr.c` | Recursively printing an integer digit by digit, handling negatives |
| `ft_atoi.c` | Parsing a string to integer: skips whitespace, reads sign, accumulates digits |

---

## C05 — Recursion & Algorithms

**Objective:** Compare iterative and recursive approaches to the same problem, and implement fundamental mathematical algorithms. Covers factorial, exponentiation, Fibonacci, integer square root, and prime detection — each implemented first iteratively, then recursively where applicable.

| Exercise | Main concept |
|----------|-------------|
| `ft_iterative_factorial.c` | Factorial with a while loop |
| `ft_recursive_factorial.c` | Factorial via recursive calls (base case: n ≤ 1) |
| `ft_iterative_power.c` | Exponentiation with a loop accumulator |
| `ft_recursive_power.c` | Exponentiation via recursion |
| `ft_fibonacci.c` | Fibonacci: `fib(n) = fib(n-1) + fib(n-2)` with base cases at 0 and 1 |
| `ft_sqrt.c` | Integer square root: incremental search until `i * i >= n` |
| `ft_is_prime.c` | Prime detection: testing divisibility from 2 to n-1 |
| `ft_find_next_prime.c` | Finding the next prime ≥ n by composing `ft_is_prime` in a loop |

---

## C06 — Command-Line Arguments

**Objective:** Understand how C programs receive input from the shell through `argc` and `argv`. Covers accessing the program's own name (`argv[0]`), iterating over all arguments, and reversing their print order. Establishes the foundation for writing programs that accept user-provided parameters.

| Exercise | Main concept |
|----------|-------------|
| `ft_print_program_name.c` | Printing `argv[0]` — the program's own name |
| `ft_print_params.c` | Iterating through all `argv` entries and printing each |
| `ft_rev_params.c` | Printing arguments in reverse order (from `argc-1` to `1`) |

---

## C07 — Dynamic Memory Allocation

**Objective:** Introduce heap memory management with `malloc` and `free`. Covers duplicating strings onto the heap, creating dynamically sized integer arrays, working with pointer-to-pointer parameters to return allocated memory, and joining multiple strings with a separator into a single allocation.

| Exercise | Main concept |
|----------|-------------|
| `ft_strdup.c` | Allocating memory for a string copy with `malloc`, then copying it |
| `ft_range.c` | Creating a `malloc`-allocated int array filled from `min` to `max-1` |
| `ft_ultimate_range.c` | Double pointer (`**range`) output parameter; returns size or -1 on error |
| `ft_strjoin.c` | Joining an array of strings into one allocation, separated by a given string |

---

## C08 — Header Files & Data Structures

**Objective:** Learn to organize C code using header files (`.h`). Covers writing function prototypes, defining constants and function-like macros with `#define`, using `typedef` to create type aliases, and defining `struct` to group related data. Culminates in working with arrays of structs and allocating them dynamically.

| Exercise | Main concept |
|----------|-------------|
| `ft.h` | Header file with function prototypes: `ft_putchar`, `ft_swap`, `ft_putstr`, `ft_strlen`, `ft_strcmp` |
| `ft_boolean.h` | `typedef int t_bool`, macros for `TRUE`, `FALSE`, `EVEN(x)` |
| `ft_abs.h` | Function-like macro `ABS(x)` using the ternary operator |
| `ft_point.h` | `struct s_point { int x; int y; }` with `typedef t_point` |
| `ft_strs_to_tab.c` | Allocating an array of `t_stock_str` structs from a string array |
| `ft_show_tab.c` | Iterating over a struct array and printing each field |

---

## rush00 — Rectangle Drawing (Rush Project)

**Objective:** A timed team challenge (rush) to draw a customizable rectangle in the terminal using only `write()`. Consolidates the fundamentals of C00: character output, nested loops, and conditional logic. The program draws borders with `o` at corners, `-` on horizontal edges, `|` on vertical edges, and spaces inside — handling all edge cases (1×1, 1×N, N×1).

| File | Role |
|------|------|
| `main.c` | Entry point, calls `rush(x, y)` |
| `rush00.c` | Orchestrates which drawing helper to call |
| `ft_putchar.c` | Core logic: `print_x` (horizontal lines), `print_y` (vertical lines with spacing) |

---

## rush01 — Puzzle Solver (Rush Project)

**Objective:** A timed team challenge to solve a 4×4 visibility puzzle (similar to a constrained Sudoku). The program takes 16 space-separated clues representing how many buildings are visible from each side of the grid, and must produce a valid 4×4 arrangement. Covers input parsing, constraint validation, 2D array management, and an exploration of random number generation via `malloc` address casting.

| File | Role |
|------|------|
| `main.c` | Input parsing, clue validation (`verify`), grid initialization (`all_blank`), puzzle-solving framework |
| `test1.c` | Pseudo-random number generator (1–4) using heap address arithmetic and XOR |

---

*42 School — C Piscine | jericard*
