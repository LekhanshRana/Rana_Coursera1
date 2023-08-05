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
 * @file <First Assignment-> 
 * @brief <This is the Header file for 7 functions which are used in 
 *          our main code>
 *
 *
 *
 * @author <Lekhansh Rana>
 * @date <05/08/2023>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Function to print given array  */ 
void print_array(unsigned char *ptr, unsigned char n);
/**
 * @brief Function to print the given array
 *
 * This function takes as an input of unsigned char pointer
 * and unsigned char n. char pointer stores the value of given
 * data array and n tells us about the size of the char array.
 * The function takes value at each index of char array and 
 * print it till last value. 
 *  
 * @param *ptr  a pointer to an unsigned char data type
 * @param n size of the array
 * 
 * @result print the array 
 */




/* Function used to sort the array in the descending order */ 
void sort_array(unsigned char *ptr, unsigned char n);
/**
 * @brief 
 * We are using bubble sort algorithm for sorting the array.
 * Each element o the array compared with other and each elements.
 * Then if the value of first element is smaller than second element
 * then we swap the elements using another unsigned char temp. 
 * As we are taking the pointer, so the original value at the index 
 * changes and it forms the new array. 
 * 
 *
 * @param *ptr  a pointer to an unsigned char data type
 * @param n size of the array
 * 
 * @result print the array of the elements from largest to smallest
 */


/* Function to find the minimum value in the array */ 
unsigned char find_minimum(unsigned char *ptr, unsigned char n);
/**
 * @brief 
 * Function is used to find the minimum value in the array.
 * First we define min as unsigned char and copy the value of 
 * first index element, i.e. zeroth element. Then check exh value
 * with min and assign the minimun value to the min.  
 * 
 *
 * @param *ptr  a pointer to an unsigned char data type
 * @param n size of the array
 * 
 * @return min minimum value in the array
 */

/* Function to find the maximum value in the array */ 
unsigned char find_maximum(unsigned char *ptr, unsigned char n);
/**
 * @brief 
 * Function is used to find the maximum value in the array.
 * First we define max as unsigned char and copy the value of 
 * first index element, i.e. zeroth element. Then check value
 * with max and assign the maximun value to the max.  
 * 
 *
 * @param *ptr  a pointer to an unsigned char data type
 * @param n size of the array
 * 
 * @return max maximum value in the array
 */

/* Function to find the mean of the array */ 
unsigned char find_mean(unsigned char *ptr, unsigned char n);
/**
 * @brief 
 * Function is used to find the mean of the array.
 * Initialize the unsigned char mean with 0. With the for loop
 * we add each value char data in mean, and finally mean will 
 * be the some of all elemnets in the array. To find the mean,
 * divide mean by no.  of elements in the array.   
 * 
 *
 * @param *ptr  a pointer to an unsigned char data type
 * @param n size of the array
 * 
 * @return mean/n mean value of the array
 */

/* Function to find the median of the array */ 
unsigned char find_median(unsigned char *ptr, unsigned char n);
/**
 * @brief 
 * Function is used to find the median of the array.
 * As the array is already sorted, so if the number of 
 * elements in the array is even then we find the mean
 * of middle two elements and if the number of elements
 * in the is add then we find the middle element and 
 * return the value      
 * 
 *
 * @param *ptr  a pointer to an unsigned char data type
 * @param n size of the array
 * 
 * @return median median value, depends on the number of
 *                 elements in the array 
 */

/* A function that prints the statistics of an array
   including minimum, maximum, mean, and median. */ 
void print_statistics(unsigned char *data, unsigned char n);
/**
 * @brief 
 * Function call other functions like  minimum,maximum,mean 
 * and median. Print the return value of each function.   
 * 
 *
 * @param *ptr  a pointer to an unsigned char data type
 * @param n size of the array
 * 
 */

#endif /* __STATS_H__ */