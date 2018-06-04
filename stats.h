/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Processes an array to find specific values
 *
 * Processes the array to find mean, median, max, and min values
 *by sorting an array
 *
 * @author Ian Huezo
 * @date 6/2/2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char * arr, unsigned int length);
/**
 * @brief prints the wanted values from the array
 *
 * Will print mean, median, max, and min using a variety of function calls
 * @param arr the array with the valuese
 * @param length The specific length of the array
 *
 * @return print statement
 */

unsigned char find_median(unsigned char * arr, unsigned int length);
/**
 * @brief Find the median of the array
 *
 * The median will be found, if the median is odd, average the middle two
 *
 * @param arr the array with the valuese
 * @param length The specific length of the array
 *
 * @return will return the median as an unsigned char
 */

unsigned char find_mean(unsigned char * arr, unsigned int length);
/**
 * @brief Find the mean
 *
 * Add all values and divide by the length of the array
 *
 * @param arr the array with the values
 * @param length the length of the array
 *
 * @return return the mean as an unsigned char
 */

unsigned char find_maximum(unsigned char * arr, unsigned int length);
/**
 * @brief finds the maximum
 *
 * the maximum will sort the array with the sort_array function
 *and return the first element of the array
 *
 * @param arr the array with the values
 * @param length the length of the array
 *
 * @return return the maximum as an unsigned char
 */

unsigned char find_minimum(unsigned char * arr, unsigned int length);
/**
 * @brief finds the minimum value
 *
 * finds the minimum value by using the sort_array function
 *
 * @param arr the array with the values
 * @param length the length of the array
 *
 * @return return the mean as an unsigned char
 */

unsigned char* sort_array(unsigned char* arr, unsigned int length);
/**
 * @brief sorts the array from largest[0] to smallest[MAX]
 *
 * Using an algorithm for sorting will create a sorted array that starts
 *from max to min values
 *
 * @param arr the array with the values
 * @param length the length of the array
 *
 * @return the sorted array as an unsigned char
 */



#endif /* __STATS_H__ */
