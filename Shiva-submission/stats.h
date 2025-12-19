
/**
 * @file stats.h
 * @brief Statistical analytics functions for unsigned char datasets
 *
 * This header file declares functions used to analyze an array of
 * unsigned char data items. The statistics include minimum, maximum,
 * mean, and median values, along with utility functions for sorting
 * and printing the dataset. The design follows embedded C best
 * practices with no dynamic memory or floating-point usage.
 *
 * @author Shiva Goud
 * @date 18-12-2025
 */

#ifndef __STATS_H__
#define __STATS_H__

#include <stdio.h>

/**
 * @brief Prints the statistics of the given data array
 *
 * This function computes and prints the minimum, maximum, mean,
 * and median values of the provided dataset using printf.
 *
 * @param data Pointer to the unsigned char data array
 * @param length Number of elements in the array
 */
void print_statistics(unsigned char *data, unsigned int length);

/**
 * @brief Prints the contents of the data array
 *
 * This function prints each element of the array in a formatted
 * manner using printf.
 *
 * @param data Pointer to the unsigned char data array
 * @param length Number of elements in the array
 */
void print_array(unsigned char *data, unsigned int length);

/**
 * @brief Finds the median value of the data array
 *
 * This function returns the median value of the dataset. The array
 * is expected to be sorted before calling this function. For even
 * length arrays, the median is the average of the two middle values,
 * rounded down.
 *
 * @param data Pointer to the unsigned char data array
 * @param length Number of elements in the array
 * @return Median value of the dataset
 */
unsigned char find_median(unsigned char *data, unsigned int length);

/**
 * @brief Finds the mean (average) value of the data array
 *
 * This function computes the arithmetic mean of the dataset using
 * integer arithmetic only. The result is rounded down.
 *
 * @param data Pointer to the unsigned char data array
 * @param length Number of elements in the array
 * @return Mean value of the dataset
 */
unsigned char find_mean(unsigned char *data, unsigned int length);

/**
 * @brief Finds the maximum value in the data array
 *
 * This function iterates through the dataset and returns the
 * largest value present in the array.
 *
 * @param data Pointer to the unsigned char data array
 * @param length Number of elements in the array
 * @return Maximum value in the dataset
 */
unsigned char find_maximum(unsigned char *data, unsigned int length);

/**
 * @brief Finds the minimum value in the data array
 *
 * This function iterates through the dataset and returns the
 * smallest value present in the array.
 *
 * @param data Pointer to the unsigned char data array
 * @param length Number of elements in the array
 * @return Minimum value in the dataset
 */
unsigned char find_minimum(unsigned char *data, unsigned int length);

/**
 * @brief Sorts the data array in descending order
 *
 * This function sorts the elements of the array in-place such that
 * the largest value is at index 0 and the smallest value is at
 * index (length - 1).
 *
 * @param data Pointer to the unsigned char data array
 * @param length Number of elements in the array
 */
void sort_array(unsigned char *data, unsigned int length);

#endif /* __STATS_H__ */
