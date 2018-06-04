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
 * @file stats.c
 * @brief A simple array manipulation program
 *
 * Returns array processesing like mean.
 *
 * @author Ian Huezo
 * @date 6/3/18
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  unsigned char * inputArray = test;
  //acquire the length of the array
  unsigned int length = sizeof(test)/sizeof(test[0]);
  print_statistics(inputArray, length);

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistics(unsigned char * arr, unsigned int length)
{
	unsigned char * sortedArr = sort_array(arr, length);

	printf("The mean is %d \n",find_mean(arr, length));
	printf("The maximum is %d\n", find_maximum(sortedArr, length));
	printf("The minimum is %d\n", find_minimum(sortedArr, length));
	printf("The median is %d\n", find_median(sortedArr, length));

}

unsigned char find_median(unsigned char * arr, unsigned int length)
{
	if(length % 2 == 0)
	{
		unsigned int upper = arr[length/2] + 1;
		unsigned  int lower = arr[length/2];
		return ((upper+lower)/2);
	}
	else{
		return arr[length/2];
	}
}

unsigned char find_mean(unsigned char * arr, unsigned int length)
{
	//need unsigned int because char only holds 2^8 bits(on this machine anyway)
	unsigned int value = 0;
	unsigned char average;

	for(unsigned int i = 0; i < length; i++)
	{
		value += *arr;
		arr++;
	}

	value = value / length;
	average = value;
	return  average;
}

unsigned char find_maximum(unsigned char * arr, unsigned int length)
{
	return arr[0];
}

unsigned char find_minimum(unsigned char * arr, unsigned int length)
{
	return arr[length - 1];
}

unsigned char* sort_array(unsigned char * arr, unsigned int length)
{
	unsigned char temp;


	for(unsigned int i = 0; i < length; i++)
	{
		for(unsigned int j = i; j < length ; j++)
		{
			if(arr[i] <= arr[j+1])
			{
				temp = arr[i];
				arr[i] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	return arr;
	//return the array
}

/* Add other Implementation File Code Here */
