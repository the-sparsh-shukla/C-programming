# C Programming Portfolio

A GitHub-ready C programming repository that moves from fundamentals to advanced topics and finishes with practical CLI projects. It is designed to show both learning depth and real implementation work in one place.

## What Is Inside

- `src/` - topic-by-topic examples from basics through system programming
- `projects/` - portfolio projects with their own build files and READMEs
- `docs/` - roadmap, setup notes, and style guidance
- `tests/` - sample inputs and expected outputs
- `scripts/` - helper scripts for build and run workflows

## Highlights

- Clear progression from introductory C syntax to memory, files, data structures, and algorithms
- Multiple examples per topic so the repository looks complete, not just minimal
- Mini exercises in each topic folder for practice and interview-style review
- Six practical projects that demonstrate problem solving and CLI program design
- Make-based build automation that works on Windows with MinGW and on Unix-like systems with GNU Make

## Learning Path

1. Basics
2. Control Flow
3. Functions
4. Arrays and Strings
5. Pointers
6. Structs and Unions
7. Dynamic Memory
8. File Handling
9. Data Structures
10. Algorithms
11. System Programming

## Projects

1. Calculator
2. Student Management System
3. Tic Tac Toe
4. Contact Book
5. File Organizer
6. DSA Toolkit

## Build

Use the root makefile to compile the topic examples.

```bash
make all
```

On Windows with MinGW:

```bash
mingw32-make all
```

To build an individual project:

```bash
make -C projects/01_calculator
```

## Run Example

The calculator project can be executed with sample input from `tests/samples/`.

```bash
"12 + 8" | projects/01_calculator/main.exe
```

## Repository Goals

- Serve as a polished C learning portfolio
- Provide recruiters a quick view of progression and project quality
- Offer a clean base for future expansions such as pointer-heavy utilities, more data structures, and larger command-line tools

## License

MIT
