# Daily Practical Programming in C

![Language](https://img.shields.io/badge/language-C-blue)
![Programs](https://img.shields.io/badge/programs-15-brightgreen)
![Level](https://img.shields.io/badge/level-beginner-orange)

A daily-practice repository of small, self-contained C programs, built to
strengthen programming fundamentals through hands-on problem solving.
Each program lives in its own folder as a single `main.c`.

## Table of Contents

- [Why This Repo](#why-this-repo)
- [Concepts Covered](#concepts-covered)
- [Programs](#programs)
- [Repository Structure](#repository-structure)
- [Prerequisites](#prerequisites)
- [Getting Started](#getting-started)
- [Build & Run](#build--run) 

## Why This Repo

- Build a daily coding habit with one small program at a time.
- Practice logic building and problem solving, not just syntax.
- Keep every program simple enough to read in a minute and run in a second.
- Serve as a reference for beginners learning C.

## Concepts Covered

- Input/output with `printf` / `scanf`
- Conditionals and `switch`
- Loops and digit manipulation
- Functions and recursion
- Arrays and strings
- Math library (`pow`) and formatted output

## Programs

| Category      | Programs                                                      |
| ------------- | ------------------------------------------------------------- |
| Basics        | Hello World, ASCII Characters, Basic Calculator               |
| Number checks | Even/Odd, Prime, Armstrong, Palindrome, Leap Year             |
| Math          | Factorial (loop & recursion), Sum of Digits, Largest of Three |
| Arrays        | Average of Numbers (Array)                                    |
| Finance       | Simple Interest, Compound Interest                            |
| Dates         | Days in Months                                                |

## Repository Structure

```
Daily_Practical_Programming_in_C/
├── ANSCII Characters/
│   └── main.c
├── Armstrong Number Checker/
│   └── main.c
├── Average of Numbers (Array)/
│   └── main.c
├── Basic Calculator/
│   └── main.c
├── Compound Interest Calculator/
│   └── main.c
├── Days in Months/
│   └── main.c
├── Even or Odd Checker/
│   └── main.c
├── Factorial of Number/
│   └── main.c
├── Hello World/
│   └── main.c
├── Largest of Three Numbers/
│   └── main.c
├── Leap Year Checker/
│   └── main.c
├── Palindrome Number Checker/
│   └── main.c
├── Prime Number Checker/
│   └── main.c
├── Simple Interest Calculator/
│   └── main.c
├── Sum of Digits/
│   └── main.c
└── README.md
```

Folder names are written in plain English so you can tell what a program does
before opening it.

## Prerequisites

You need a C compiler. GCC is used in the examples below.

| OS      | How to get GCC                                                  |
| ------- | --------------------------------------------------------------- |
| Windows | Install [MinGW-w64](https://www.mingw-w64.org/) or use WSL      |
| Linux   | `sudo apt install build-essential` (Debian/Ubuntu)              |
| macOS   | `xcode-select --install` (provides Clang, which works the same) |

Check the install with:

```bash
gcc --version
```

## Getting Started

Clone the repository and move into it:

```bash
git clone https://github.com/Redex110/Daily_Practical_Programming_in_C.git
cd Daily_Practical_Programming_in_C
```

## Build & Run

Go into any program's folder, then compile and run it:

```bash
cd "Prime Number Checker"
gcc main.c -o main -lm && ./main
```

On Windows (Command Prompt or PowerShell), run `main.exe` instead of `./main`.

Notes:

- Folder names contain spaces, so wrap them in quotes when using `cd`.
- `-lm` links the math library. It is needed for programs that use `pow`, and harmless for the rest.
- To catch common mistakes while learning, compile with warnings turned on:

  ```bash
  gcc -Wall -Wextra main.c -o main -lm
  ```

