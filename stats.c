#include <stdio.h>
#include <stdlib.h>
#include "stats.h"


void main()
{
    unsigned char n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    
    unsigned char data[n];
    for(int i = 0 ; i<n;i++)
    {
        printf("\n");
        data[i] = rand()%(80);
        printf("Enter the element at %d index : %d ", i, data[i]);
    }
    print_array(data, n);
    sort_array(data,n);
    print_statistics(data,n);
}

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

void sort_array(unsigned char *ptr, unsigned char n){
    unsigned char temp = 0; 
    for(int i = 0;i<n;i++){
        for(int j =i;j<n;j++){
            if(*(ptr+i) > *(ptr + j)){
                temp = *(ptr+i);
                *(ptr+i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }printf("\nSorted Data in increasing order :");
    print_array(ptr,n);
}
unsigned char minimum(unsigned char *ptr, unsigned char n){
    unsigned char min = *ptr;
    for(int i=0;i<n;i++){
        if(min > ptr[i]){
            min = ptr[i];
        }
    }
    return min;
}

unsigned char maximum(unsigned char *ptr, unsigned char n){
    unsigned char max = *ptr;
    for(int i=0;i<n;i++){
        if(max < ptr[i]){
            max = ptr[i];
        }
    }
    return max;
}

unsigned char mean(unsigned char *ptr, unsigned char n){
    unsigned char mean = 0;
    for(int i=0;i<n;i++){
        mean += ptr[i];
    }
    return mean/n;
}

unsigned char median(unsigned char *ptr, unsigned char n){
    if(n%2==0){
        return  (ptr[n/2] + ptr[(n/2)+1])/2;
    }
    return ptr[n/2];
}


void print_statistics(unsigned char *data, unsigned char n){
    printf("\nMinimum value in given array : %d", minimum(data,n));
    printf("\nMaximum value in given array : %d", maximum(data,n));
    printf("\nMean value of the given array : %d", mean(data,n));
    printf("\nMedian value of the given array : %d", median(data,n));
}
