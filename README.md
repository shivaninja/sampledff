
# Embedded Engineer Intern Task – Statistical Analytics Engine
## Overview

This project implements a statistical analytics engine in C designed with embedded systems constraints in mind. The application processes a fixed-size dataset of unsigned characters and computes key statistical metrics using standard C, integer arithmetic, and static memory only.

The project Meets all requirements, including:

Clean C programming practices

Pointer-based array manipulation

Datatypes used are only Unsigned Char & Unsigned int 

Structured development using Git version control

Uses only Header file(stats.h) & Soucre file(stats.c) to achieve all requirements

Only Static Memory used (No Dynamic memory used)

Unsigned Char is used to work with numbers 


## Features

 The application analyzes an array of 40 unsigned char data elements and provides:

1. Maximum value

2. Minimum value

3. Mean (average, rounded down using integer arithmetic)

4. Median value

5. Sorted dataset (descending order)

6. Prints Array



## Project File Structure
```
Main Project Directory
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

1. print_statistics()  - Prints min, max, mean, and median

2. print_array()       - Prints array contents

3. find_maximum()      – Finds the maximum value

4. find_minimum()      – Finds the minimum value

5. find_mean()         – Computes the arithmetic mean

6. find_median()       – Computes the median value

7. sort_array()        – Sorts the array in descending order

8. main()              – Program entry point and execution flow

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

1. Initial Repository – Project structure and template files

2. Project Outline – Function prototypes, documentation, and skeleton code

3. Feature Development – Full implementation, testing, and refinement


## Author

Shiva Goud

19-12-2025

Notes

This project is intended as a submission for TAMIZH Internship role. 
