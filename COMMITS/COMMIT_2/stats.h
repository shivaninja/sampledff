/**
 * @file stats.h
 * @brief Statistical analytics function declarations
 *
 * This header file contains declarations and documentation for
 * statistical analysis functions operating on unsigned char datasets.
 *
 * @author Shiva goud
 * @date 2025-12-18
 */

#ifndef __STATS_H__
#define __STATS_H__

#include <stdio.h>

/**
 * @brief Prints the statistics of the given data array
 *
 * Prints the minimum, maximum, mean, and median values of the dataset.
 *
 * @param data Pointer to the data array
 * @param length Number of elements in the array
 */
void print_statistics(unsigned char *data, unsigned int length);

/**
 * @brief Prints the contents of the data array
 *
 * @param data Pointer to the data array
 * @param length Number of elements in the array
 */
void print_array(unsigned char *data, unsigned int length);

/**
 * @brief Finds the median value of the data array
 *
 * @param data Pointer to the data array
 * @param length Number of elements in the array
 * @return Median value
 */
unsigned char find_median(unsigned char *data, unsigned int length);

/**
 * @brief Finds the mean value of the data array
 *
 * Uses integer arithmetic only. Result is rounded down.
 *
 * @param data Pointer to the data array
 * @param length Number of elements in the array
 * @return Mean value
 */
unsigned char find_mean(unsigned char *data, unsigned int length);

/**
 * @brief Finds the maximum value in the data array
 *
 * @param data Pointer to the data array
 * @param length Number of elements in the array
 * @return Maximum value
 */
unsigned char find_maximum(unsigned char *data, unsigned int length);

/**
 * @brief Finds the minimum value in the data array
 *
 * @param data Pointer to the data array
 * @param length Number of elements in the array
 * @return Minimum value
 */
unsigned char find_minimum(unsigned char *data, unsigned int length);

/**
 * @brief Sorts the data array in descending order
 *
 * @param data Pointer to the data array
 * @param length Number of elements in the array
 */
void sort_array(unsigned char *data, unsigned int length);

#endif /* __STATS_H__ */
