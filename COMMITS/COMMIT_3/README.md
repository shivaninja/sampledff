
# Embedded Engineer Intern Task

This repository contains a C-based statistical analytics project
developed as part of an Embedded Engineer Intern assignment.
Author: Shiva Goud

# COMMIT 3

## This Commit includes 3 things. 
## 1. Building all the program logic to fill the skeliton code in stats.c file
## 2. ALso declaring and defining the local variables in stat.c subroutine function
## 3. Calling all the subroutine function from main function.

## Building Logic includes
1. Sorting Array using Bubble Sort Algorithm
2. Finding Maximum using forloop and keep storing biggest element in each iteration
3. Finding Minimum using forloop and keep storing smallest element in each iteration
4. Finding Mean using Average formula: (Sum of all numbers )/Total numbers
5. Finding Median using finging middle term with formula (Length of array)/2
6. Printing all array elements using for loop and print function
7. Creating a function named print_statistics() and using it to call MEAN, MEDIAN , MIN , MAX functions


## Below is program form main function that is used for calling subrouting function.
## This below code is added in commit 3
 ```
 printf("=====Array Statistics=====");
    print_array(test, SIZE);
    printf("\n");

    /* Sort the array from largest to smallest */
    sort_array(test, SIZE);
    printf("\n");

    /* Print statistical results */
    print_statistics(test, SIZE);
    printf("\n");

    printf("====Sorted Array====");
    print_array(test, SIZE);
    printf("\n");

```

