/**
 * @file stats.c
 * @brief Statistical analytics engine implementation
 *
 * This file contains the implementation of functions used to analyze
 * an array of unsigned char data. Operations include sorting and
 * calculating basic statistics such as minimum, maximum, mean,
 * and median. The code is written following embedded C best practices.
 *
 * @author Shiva Goud
 * @date 18-12-2025
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main(void) {
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114,  88,  45,  76, 123,  87,  25,  23,
                                200, 122, 150,  90,  92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90 };

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
};

/* Statistics and Printing Functions will be added step-by-step */

/***********************************************************
 * Function: sort_array
 * Description:
 * Sorts an array of unsigned char values in descending order
 * using the Bubble Sort algorithm.
 ***********************************************************/
void sort_array(unsigned char *data, unsigned int length) {
    unsigned int i, j;
    unsigned char temp;

    /* Bubble sort: largest values "bubble" to the front */
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - 1 - i; j++) {
            /* Swap if the current element is smaller than the next */
            if(*(data + j) < *(data + j + 1)) {
                temp = *(data + j);
                *(data + j) = *(data + j + 1);
                *(data + j + 1) = temp;
            }
        }
    }
}

/***********************************************************
 * Function: find_maximum
 * Description:
 * Finds and returns the maximum value in the data array.
 ***********************************************************/
unsigned char find_maximum(unsigned char *data, unsigned int length) {
    unsigned int i;
    unsigned char max = *data;

    for (i = 1; i < length; i++) {
        if (*(data + i) > max) {
            max = *(data + i);
        }
    }
    return max;
}

/***********************************************************
 * Function: find_minimum
 * Description:
 * Finds and returns the minimum value in the data array.
 ***********************************************************/
unsigned char find_minimum(unsigned char *data, unsigned int length) {
    unsigned int i;
    unsigned char min = *data;

    for (i = 1; i < length; i++) {
        if (*(data + i) < min) {
            min = *(data + i);
        }
    }
    return min;
}

/***********************************************************
 * Function: find_mean
 * Description:
 * Calculates and returns the mean (average) value of the data array
 * using integer arithmetic only. The result is rounded down.
 ***********************************************************/
unsigned char find_mean(unsigned char *data, unsigned int length) {
    unsigned int i;
    unsigned int sum = 0;

    for (i = 0; i < length; i++) {
        sum += *(data + i);
    }

    /* Integer division automatically rounds down */
    return (unsigned char)(sum / length);
}

/***********************************************************
 * Function: find_median
 * Description:
 * Calculates and returns the median value of the data array.
 * The array must be sorted in descending or ascending order
 * before calling this function.
 ***********************************************************/
unsigned char find_median(unsigned char *data, unsigned int length) {
    unsigned char median;

    /* Even number of elements */
    if ((length % 2) == 0) {
        unsigned int mid = length / 2;
        median = (unsigned char)((*(data + mid - 1) + *(data + mid)) / 2);
    }
    /* Odd number of elements */
    else {
        median = *(data + (length / 2));
    }

    return median;
}

/***********************************************************
 * Function: print_array
 * Description:
 * Prints the contents of the data array in a formatted manner.
 ***********************************************************/
void print_array(unsigned char *data, unsigned int length) {
    unsigned int i;

    printf("\nArray Contents:\n ");
    for (i = 0; i < length; i++) {
        printf("%u ", *(data + i));
    }
}

/***********************************************************
 * Function: print_statistics
 * Description:
 * Prints the minimum, maximum, mean, and median of the data array.
 ***********************************************************/
void print_statistics(unsigned char *data, unsigned int length) {
    unsigned char min, max, mean, median;

    max = find_maximum(data, length);
    min = find_minimum(data, length);
    mean = find_mean(data, length);
    median = find_median(data, length);

    printf("Maximum: %u \n", max);
    printf("Minimum: %u \n", min);
    printf("Mean:    %u \n", mean);
    printf("Median:  %u \n", median);

}

/* Other statistical function implementations will follow */
