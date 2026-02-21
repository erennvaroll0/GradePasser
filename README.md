# GradePasser Pro

A modular C application designed to calculate the minimum final exam grade required to achieve a target letter grade for various engineering courses.

## Features

- **Course-Specific Weighting:** Supports unique weight distributions for Math, Physics, and Computer Engineering courses.
- **Dynamic Assessment:** Calculates requirements based on Midterm, Quiz, Homework, Lab, and Project scores.
- **Goal Analysis:** Validates feasibility of target grades (AA through DD).
- **Architecture:** Built with a modular structure (Source/Include) and automated with Makefile.

## Project Structure

- `src/`: Implementation files (.c)
- `include/`: Header definitions (.h)
- `obj/`: Compiled object files
- `Makefile`: Build automation script

## Installation & Usage

### Compilation
To compile the project using the automated build system:
```bash
make