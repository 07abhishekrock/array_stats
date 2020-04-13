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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
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

  char median  = 0;
  char mean    = 0;
  char maximum = 0;
  char minimum = 0;

  print_array(test,SIZE);
  printf("\n\n");
  print_statistics(test,SIZE);
  sort_array(test,SIZE);
  print_array(test,SIZE);
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */


}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char * array, unsigned int size)
{
	unsigned char median = 0, mean = 0, minimum = 0, maximum = 0;
	median  = find_median(array, size);
	mean    = find_mean(array, size);
	maximum = find_maximum(array, size);
	minimum = find_minimum(array, size); 	

	printf("----The Statistics for the array are as follows-----\n");
	printf("----The minimum is : %d\n", minimum);
	printf("----The maximum is : %d\n", maximum);
	printf("----The mean    is : %d\n", mean);
	printf("----The median  is : %d\n", median);
	printf("----Display ends------------------------------------\n\n");
}

void print_array(unsigned char * array, unsigned int size)
{
	char i = 0;
	printf("----The array is as follows----------------------------\n");
	for(i = 0; i<size; i++)
	{
		printf("%d ", *(array+i));
	}
	printf("\n----array has ended------------------------------------\n\n");
}

unsigned char find_median(unsigned char * array, unsigned int size)
{
	//printf("----The median of the input array is---------------");
	if(size % 2 == 0)
	{
	return *(array + ((size)/2) - 1);	
	}
	else
	{
	return *(array + ((size-1)/2));		
	}
}

unsigned char find_mean(unsigned char * array, unsigned int size)
{
	char i = 0;
	unsigned int mean = 0;
	unsigned char mean_ = 0;
	//printf("----The mean of the input array is-----------------");
	for(i = 0;i< size;i++)
	{
		mean = mean + *(array + i);
	}
	mean_ = mean/size;
	return mean_;
}

unsigned char find_minimum(unsigned char * array, unsigned int size)
{
	char i = 0;
	unsigned char minimum = 0;
	//printf("----The mean of the input array is-----------------");
	for(i = 0;i< size;i++)
	{
		if(i == 0)
		{
			minimum = *(array);
		}
		else
		{
			if(*(array + i) < minimum)
				minimum = *(array+i);
		}
	}
	return minimum;
}
unsigned char find_maximum(unsigned char * array, unsigned int size)
{
	char i = 0;
	char maximum = 0;
	//printf("----The mean of the input array is-----------------");
	for(i = 0;i< size;i++)
	{
		if(i == 0)
		{
			maximum = *(array);
		}
		else
		{
			if(*(array + i) > maximum)
				maximum = *(array+i);
		}
	}
	return maximum;
}
void swap(unsigned char * a, unsigned char * b)
{
	unsigned char t = *a;
	*a = *b;
	*b = t;
}
void sort_array(unsigned char * array, unsigned int size)
{
	char i = 0;
	char j = 0; 
	char index = 0;
	unsigned char minimum = 0;
	for(i = 0;i<size;i++)
	{	
		for(j = 0;j<size-i;j++)
		{
			if(j==0)
			{
				minimum = *(array);
				index = 0;
			}
			else
			{
				if(*(array + j) <= minimum)
				{
				minimum = *(array+j);
				index   =  j;
				}
			}
		}

		swap((array+index),(array+size-1-i));
		
	}


}
