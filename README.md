# Daily Practical Programming in C

![Language](https://img.shields.io/badge/language-C-blue)
![Programs](https://img.shields.io/badge/programs-17-brightgreen)
![Level](https://img.shields.io/badge/level-beginner-orange)

Daily C programming practice: small, self-contained programs to build strong fundamentals. A growing, beginner-friendly collection covering core concepts, logic building, and problem-solving, with each program in its own folder.

## Table of Contents

- [Why This Repo](#why-this-repo)
- [Concepts Covered](#concepts-covered)
- [Programs](#programs)
- [Repository Structure](#repository-structure)
- [Prerequisites](#prerequisites)
- [Getting Started](#getting-started)
- [Build & Run](#build--run)

## Why This Repo

- Build a daily coding habit with short, focused C exercises.
- Practice core logic and problem-solving instead of memorizing syntax.
- Keep every program small, readable, and easy to run independently.
- Use the repository as a beginner-friendly reference for learning C fundamentals.
- Grow from simple concepts to more practical coding tasks over time.

## Concepts Covered

- Variables, data types, and arithmetic operations
- Input/output with `printf` and `scanf`
- Conditionals and decision-making logic
- Loops and iterative problem solving
- Arrays and basic string handling
- Functions, recursion, and modular code
- Math-based challenges and numerical logic
- File handling basics
- Real-world beginner problems like interest, dates, and validation

## Programs

| Category | Programs |
| --- | --- |
| Basics | Hello World, ANSCII Characters, Basic Calculator |
| Number checks | Even or Odd Checker, Prime Number Checker, Armstrong Number Checker, Palindrome Number Checker, Leap Year Checker |
| Math | Factorial of Number, Sum of Digits, Largest of Three Numbers |
| Arrays | Array Odd-Even Position Swapper, Average of Numbers (Array) |
| Finance | Simple Interest Calculator, Compound Interest Calculator |
| Dates | Days in Months |
| File handling | Basic of File Managament |

## Repository Structure

```text
Daily_Practical_Programming_in_C/
├── ANSCII Characters/
│   └── main.c
├── Armstrong Number Checker/
│   └── main.c
├── Array Odd-Even Position Swapper/
│   └── main.c
├── Average of Numbers (Array)/
│   └── main.c
├── Basic Calculator/
│   └── main.c
├── Basic of File Managament/
│   ├── File Content Reader/
│   │   └── main.c
│   ├── File Content Rewriter
│   │   └── main.c
│   └── File Creation
│       └── main.c
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

Each folder contains a single small C program, making it easy to explore one concept at a time.

## Prerequisites

You need a C compiler. GCC is used in the examples below.

| OS | How to get GCC |
| --- | --- |
| Windows | Install [MinGW-w64](https://www.mingw-w64.org/) or use WSL |
| Linux | `sudo apt install build-essential` (Debian/Ubuntu) |
| macOS | `xcode-select --install` (provides Clang, which works the same) |

Check the installation with:

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

Open any program folder, then compile and run it:

```bash
cd "Prime Number Checker"
gcc main.c -o main -lm && ./main
```

On Windows (Command Prompt or PowerShell), run `main.exe` instead of `./main`.

Notes:

- Folder names contain spaces, so wrap them in quotes when using `cd`.
- `-lm` links the math library. It is useful for programs that use `pow`, and harmless for the rest.
- To catch common beginner mistakes while learning, compile with warnings enabled:

  ```bash
  gcc -Wall -Wextra main.c -o main -lm
  ```
