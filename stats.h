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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/*-------------------Function Declarations of stats.c starts from here--------------*\

/*
 * @brief  : Prints the statistics of an array 
 * 			 including minimum, maximum, mean and median
 * @param  : None
 * @return : None

*/
void print_statistics(unsigned char * array, unsigned int size);

/*
 * @brief  : Prints the array given data and its length
 * @param  : <char * array> <the pointer variable pointing to the first data element of the array>
 * @param  : <char size>    <the size of the array>
 * @return : None

*/
void print_array(unsigned char * array, unsigned int size);

/*
 * @brief  : returns the median of the input array
 * @param  : <char * array> <the pointer variable pointing to the first data element of the array>
 * @param  : <char size>	<the size of the input array>
 * @return : <char median>  <returns the median of the array data>

*/
unsigned char find_median(unsigned char * array, unsigned int size);

/*
 * @brief  : returns the mean of the input array
 * @param  : <char * array> <the pointer variable pointing to the first data element of the array>
 * @param  : <char size>	<the size of the input array>
 * @return : <char mean>  <returns the mean of the array data>

*/
unsigned char find_mean(unsigned char * array, unsigned int size);

/*
 * @brief  : returns the maximum of the input array
 * @param  : <char * array> <the pointer variable pointing to the first data element of the array>
 * @param  : <char size>	<the size of the input array>
 * @return : <char maximum>  <returns the maximum of the array data>

*/
unsigned char find_maximum(unsigned char * array, unsigned int size);

/*
 * @brief  : returns the minimum of the input array
 * @param  : <char * array> <the pointer variable pointing to the first data element of the array>
 * @param  : <char size>	<the size of the input array>
 * @return : <char median>  <returns the median of the array data>

*/
unsigned char find_minimum(unsigned char * array, unsigned int size);

/*
 * @brief  : sorts the input array from largest to smallest
 * @param  : <char * array> <the pointer variable pointing to the first data element of the array>
 * @param  : <char size>	<the size of the input array>
 * @return : None

*/
void sort_array(unsigned char * array, unsigned int size);
#endif /* __STATS_H__ */
