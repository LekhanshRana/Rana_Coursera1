/* Author - Lekhansh Rana
*  Assessment 1 - C1M1
*/

#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

//Main Function
void main()
{
    unsigned char n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    
    //Enter the element 
    unsigned char data[n];
    for(int i = 0 ; i<n;i++)
    {
        printf("\n");
        printf("Enter the element at %d index : ", i);
        scanf("%d", &data[i]);
    }
    print_array(data, n);
    sort_array(data,n);
    print_statistics(data,n);
}

//Function to print the Array
void print_array(unsigned char *ptr, unsigned char n)
{
    int i=0;
    printf("\nData with %d elements: ", n);
    while(i<n)
    {
        printf(" %d ", *ptr);
        ptr++;
        i++;
    }
}

//Function to sort the elements of array from Largest to Smallest
void sort_array(unsigned char *ptr, unsigned char n){
    unsigned char temp = 0; 
    for(int i = 0;i<n;i++){
        for(int j =i;j<n;j++){
            if(*(ptr+i) < *(ptr + j)){
                temp = *(ptr+i);
                *(ptr+i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }printf("\nSorted Data from largest to smallest :");
    print_array(ptr,n);
}

//Functon to find the minimum value in the array
unsigned char find_minimum(unsigned char *ptr, unsigned char n){
    unsigned char min = *ptr;
    for(int i=0;i<n;i++){
        if(min > ptr[i]){
            min = ptr[i];
        }
    }
    return min;
}

// Function to find the maximum value in the array
unsigned char find_maximum(unsigned char *ptr, unsigned char n){
    unsigned char max = *ptr;
    for(int i=0;i<n;i++){
        if(max < ptr[i]){
            max = ptr[i];
        }
    }
    return max;
}

//Function to find the Mean of the Array
unsigned char find_mean(unsigned char *ptr, unsigned char n){
    unsigned char mean = 0;
    for(int i=0;i<n;i++){
        mean += ptr[i];
    }
    return mean/n;
}

//Function to find the Median in the Array
unsigned char find_median(unsigned char *ptr, unsigned char n){
    if(n%2==0){
        return  (ptr[n/2] + ptr[(n/2)+1])/2;
    }
    return ptr[n/2];
}

//Function to print the statistics - minimum, maximum, mean, median
void print_statistics(unsigned char *data, unsigned char n){
    printf("\nMinimum value in given array : %d", find_minimum(data,n));
    printf("\nMaximum value in given array : %d", find_maximum(data,n));
    printf("\nMean value of the given array : %d", find_mean(data,n));
    printf("\nMedian value of the given array : %d", find_median(data,n));
}
