# This is the main README file
# TAMIZH Internship Project
# Embedded Engineer Intern Project – Statistical Analytics Engine
### [Project video Link](https://drive.google.com/drive/folders/1dL0t2DnNMvj6Cr1PKFtIV96chg5FbR-j?usp=drive_link)

## Overview

This project implements a statistical analytics engine in C designed with embedded systems constraints in mind. The application processes a fixed-size dataset of unsigned characters and computes key statistical metrics using standard C, integer arithmetic, and static memory only.

The project Meets all requirements, including:

Clean C programming practices

Pointer-based array manipulation

Datatypes used are only 'Unsigned Char' & 'Unsigned int' 

Structured development using Git version control


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
Project Folder
        |__ README.md
        |__ stats.c
        |__ stats.h
```

stats.c – It is source file with function implementations and program entry point(Main function)

stats.h – It is header file with function declarations of functions residing in stats.c file and is also has documentation

README.md – Project documentation


## Design Constraints & Requirements 

This project strictly follows constraints to meet requirements:

1. Uses only standard C features & no extra libraries 

2. Uses unsigned char for dataset storage

3. Uses unsigned int for array length

4. Uses integer arithmetic only (no floating point)

5. No dynamic memory allocation (No - Heap, Malloc, Calloc)

6. No external libraries beyond the C standard library

7. Deterministic and predictable execution

8. Uses only Header file(stats.h) & Soucre file(stats.c) to achieve all requirements

9. Unsigned Char is used to interpret numbers. 

10 Structured development using Git version control

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
Bash Commands used for building & running project files

### To install GCC in linux
```
sudo apt install gcc
```
### Compile and run the program using GCC in Linux bash CLI:
```
gcc -o stats.out stats.c
```

### To Execute the final output in bash:
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

## Simple Block Diagram

```
---------------------
|   subroutine      |
|    Functions      |
|       in          |
|   Stats.c file    |
|-------------------|
| sort_array()      |
| find_maximum()    |
| find_minimum()    |
| find_mean()       |
| find_median()     |
| print_array()     |
| print_statistics()|
---------------------    
         ^
         |
         |  2. Calls
         |
---------------------
|     stats.h       |
|-------------------|
| Function          |
| Declarations      |
| (Prototypes)      |
---------------------    
         ^
         |
         |  1. Calls
         |
---------------------
|    Main function  |
|        in         |
|    stats.c File   |
|-------------------|
|                   |
|  void main()      |
|  - Define array   |
|  - print_array()  |
|  - sort_array()   |
|  - print_stats()  |
|                   |
---------------------        
```
## Assumptions and limitations
1. You cannot insert a number that above 255 in unsigned char array because unsigned char is 1 byte and 255 is maximum number 8 bits/1byte can support
2. Unsigned integer is 4bytes with obsolete MSB, so Mazimum number it can support is 4,294,967,295
3. For Pointer arthemetic, If you add +1 to int pointer, the result points to address that is 4 bytes after, this is because int is 4 bytes
4. For Pointer arthemetic, If you add +1 to char pointer, the result points to address that is 1 bytes after, this is because char is 1 bytes
### Why 'Unsigned Char' is used ?
Below information explains why unsigned char is used 
1.  Char in c uses 1 Byte(8 Bits) of space.
2. Then maximum number that can fit in 8 bits is 255.
3. 1 bit(Left most bit) among those 8 bits is called MOST SIGNIFICANT BIT/MSB
4. MSB bit is used to indicate sign(+ & -) of number residing in next 7 bits. MSB->1 for negative, MSB->0 for positive
5. So maximum number that can fit in 7 bits in 127 which is 7 ones (111 1111)
6. Once the number is greater than 127, it occupies 8th bit(MSB bit) and it sends 1 into MSB
7. When MSB=1 the compiler does 2's complement of whole 8 bits and outputs two's complement number with negative sign before it
8. The compiler does this to accommodate the negative numbers.
9. So, maximum +ve number that can fit in normal char is 127;
10. That is why I used unsigned char. In unsigned char the MSB bit becomes obsolete, So it cannot accommodate -ve numbers
11. In unsigned char, we can use all 8 bits & maximum number supported in 255;


## Version Control Strategy

The project was developed using a three-commit Git workflow:

1. Initial Repository – Project structure and template files

2. Project Outline – Function prototypes, documentation, and skeleton code

3. Feature Development – Full implementation, testing, and refinement
   

## Implementation details
```
Programming Language: C language
Compiler: GCC
Debugger: GDB
OS: Ubuntu/ Debian Based linux distro
IDE: Visual Studio Code
Version Control: GitHub    
Dependencies: N/A (Every thing is implemented using C standard libary)
```

## Author

Shiva Goud

Date: 19-12-2025

Notes

This project is intended as a submission for TAMIZH Internship role. 










