# C Programming Portfolio

A complete, structured C programming portfolio that starts with fundamentals and grows into practical system-level problem solving.

This repository is designed for:

- students learning C in a step-by-step way,
- interview preparation through focused examples and exercises,
- showcasing applied C skills with practical command-line projects.

Created by: **Sparsh Shukla**

---

## Table of Contents

1. [Portfolio Overview](#portfolio-overview)
2. [What Has Been Completed](#what-has-been-completed)
3. [Repository Structure](#repository-structure)
4. [Learning Track (src)](#learning-track-src)
5. [Project Portfolio (projects)](#project-portfolio-projects)
6. [Build and Run](#build-and-run)
7. [Testing Samples](#testing-samples)
8. [Documentation](#documentation)
9. [Skills Demonstrated](#skills-demonstrated)
10. [Roadmap](#roadmap)
11. [Contributing](#contributing)
12. [License](#license)

---

## Portfolio Overview

The codebase is organized into two major tracks:

- **Learning Track (`src/`)**: Topic-focused examples and exercises from beginner to advanced C concepts.
- **Project Track (`projects/`)**: Practical CLI applications that apply those concepts in complete programs.

Supporting folders provide build scripts, documentation, and test samples.

---

## What Has Been Completed

This repository has already been scaffolded and validated as a complete C portfolio setup.

Completed work includes:

- Full repository scaffold from basic syntax to advanced C topics.
- Topic-wise examples organized under `src/` with exercise files.
- Six practical projects under `projects/`.
- Root and project-level Makefiles for repeatable builds.
- Helper scripts for build and run workflows.
- Documentation for setup, style guidance, and roadmap.
- Build verification and successful compilation using MinGW Make.
- VS Code build task integrated for one-command compilation.

---

## Repository Structure

```text
.
|-- CONTRIBUTING.md
|-- LICENSE
|-- Makefile
|-- README.md
|-- docs/
|   |-- portfolio-roadmap.md
|   |-- roadmap.md
|   |-- setup.md
|   `-- style-guide.md
|-- projects/
|   |-- 01_calculator/
|   |-- 02_student_management/
|   |-- 03_tic_tac_toe/
|   |-- 04_contact_book/
|   |-- 05_file_organizer/
|   `-- 06_dsa_toolkit/
|-- scripts/
|   |-- build_all.ps1
|   `-- run_example.ps1
|-- src/
|   |-- 01_basics/
|   |-- 02_control_flow/
|   |-- 03_functions/
|   |-- 04_arrays_strings/
|   |-- 05_pointers/
|   |-- 06_structs_unions/
|   |-- 07_dynamic_memory/
|   |-- 08_file_handling/
|   |-- 09_data_structures/
|   |-- 10_algorithms/
|   `-- 11_system_programming/
`-- tests/
	 `-- samples/
```

---

## Learning Track (src)

Each topic folder contains focused C programs plus exercises.

1. **01_basics**
	- Hello world, constants, data types, operators, input/output.
2. **02_control_flow**
	- If/else logic, loops, switch-based menus, condition-driven programs.
3. **03_functions**
	- Function design, parameter passing, utility functions, recursion.
4. **04_arrays_strings**
	- Array operations, min/max logic, reversing arrays/strings, string utilities.
5. **05_pointers**
	- Pointer fundamentals, arithmetic, function interaction, double pointers.
6. **06_structs_unions**
	- Struct and union modeling, pointer-to-struct usage, data organization.
7. **07_dynamic_memory**
	- `malloc`, `calloc`, `realloc`, lifecycle and safe memory patterns.
8. **08_file_handling**
	- Read/write files, append logs, file copy operations.
9. **09_data_structures**
	- Intro implementations of stack, queue, linked list, hash table.
10. **10_algorithms**
	- Sorting, searching, Euclidean GCD and algorithm practice.
11. **11_system_programming**
	- CLI arguments, environment variables, platform macros, stderr usage.

---

## Project Portfolio (projects)

1. **01_calculator**
	- Arithmetic CLI calculator with sample input/output tests.
2. **02_student_management**
	- Menu-driven student record handling.
3. **03_tic_tac_toe**
	- Console game logic and turn-based state handling.
4. **04_contact_book**
	- Basic contact storage and lookup operations.
5. **05_file_organizer**
	- Introductory file operation and organization workflow.
6. **06_dsa_toolkit**
	- Consolidated data structures and algorithm routines.

Each project includes a dedicated README and source implementation (`main.c`).

---

## Build and Run

### Prerequisites

- GCC toolchain
- GNU Make (or `mingw32-make` on Windows)

### Build Entire Portfolio

On Windows (MinGW):

```powershell
mingw32-make all
```

On Linux/macOS:

```bash
make all
```

### Build a Single Project

```bash
make -C projects/01_calculator
```

### Run a Sample Program

Example (calculator with piped input):

```bash
echo "12 + 8" | projects/01_calculator/main.exe
```

### VS Code Task

The workspace includes a build task named **Build C Portfolio** that runs:

```bash
mingw32-make all
```

---

## Testing Samples

The folder `tests/samples/` contains example input and expected output files for validating behavior, especially for the calculator project:

- `calculator_input.txt`
- `calculator_expected.txt`

These are useful for quick manual verification or future automation.

---

## Documentation

The `docs/` folder contains project guidance:

- `setup.md` - environment and setup support
- `style-guide.md` - coding and formatting conventions
- `roadmap.md` - progressive learning milestones
- `portfolio-roadmap.md` - portfolio-level growth direction

---

## Skills Demonstrated

This portfolio demonstrates practical C development in:

- Core syntax and control structures
- Functional decomposition and modular thinking
- Arrays, strings, pointers, structs, and unions
- Dynamic memory management and safety fundamentals
- File I/O and basic systems-oriented programming
- Fundamental data structures and algorithms
- Command-line interface design for real programs
- Build automation using Makefiles

---

## Roadmap

Planned enhancements can include:

- stronger input validation and error handling across all projects,
- unit/integration test automation,
- modularization into reusable headers and source libraries,
- performance-focused improvements for DSA components,
- additional projects (e.g., mini shell, log parser, memory debugger).

---

## Contributing

Contributions are welcome.

Please read `CONTRIBUTING.md` and follow the style guidelines in `docs/style-guide.md` before opening a pull request.

---

## License

Distributed under the MIT License. See `LICENSE` for details.
