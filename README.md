
# Embedded Engineer Intern Task – Statistical Analytics Engine
## Overview

This project implements a statistical analytics engine in C designed with embedded systems constraints in mind. The application processes a fixed-size dataset of unsigned characters and computes key statistical metrics using standard C, integer arithmetic, and static memory only.

The project demonstrates core skills expected from an embedded/firmware engineer, including:

Clean C programming practices

Pointer-based array manipulation

Deterministic algorithms suitable for embedded environments

Structured development using Git version control

## Features

 The application analyzes an array of 40 unsigned char data elements and provides:

1. Maximum value

2. Minimum value

3. Mean (average, rounded down using integer arithmetic)

4. Median value

5. Sorted dataset (descending order)

All results are printed to the console using printf().

```

 Project Structure

|__ README.md
|__ stats.c
|__ stats.h

```

stats.c – Function implementations and program entry point

stats.h – Function declarations and documentation

README.md – Project documentation

## Design Constraints

This project strictly follows embedded-oriented constraints:

Uses only standard C features

Uses unsigned char for dataset storage

Uses integer arithmetic only (no floating point)

No dynamic memory allocation

No external libraries beyond the C standard library

Deterministic and predictable execution

## Implemented Functions

The following functions are implemented:

print_statistics()  - Prints min, max, mean, and median

print_array()       - Prints array contents

find_maximum()      – Finds the maximum value

find_minimum()      – Finds the minimum value

find_mean()         – Computes the arithmetic mean

find_median()       – Computes the median value

sort_array()        – Sorts the array in descending order

main()              – Program entry point and execution flow

## Compilation and Execution

### Compile and run the program using GCC:
```
gcc -o stats.out stats.c
```

### To Execute the final output
```
./stats.out
```

## Sample Output
```
=== Array Statistics ===
Array Contents: 34 201 190 154 8 194 2 6 ...

Maximum: 250
Minimum: 2
Mean: 93
Median: 92

=== Sorted Array ===
250 244 230 201 201 200

```

## Version Control Strategy

The project was developed using a three-commit Git workflow:

Initial Repository – Project structure and template files

Project Outline – Function prototypes, documentation, and skeleton code

Feature Development – Full implementation, testing, and refinement

This approach reflects a structured and professional development process.

## Author

Shiva Goud

19-12-2025

Notes

This project is intended as a submission for TAMIZH Internship role. 
