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
#include <math.h>

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(unsigned char *array, int size){
printf("hello world\n");	

print_array(sort_array(array,size), size);


printf("size of array %d \n", size);
find_average(array,size);
printf("min = %d \n", find_minimum(array,size));
printf("max = %d \n", find_maximufind_medianm(array,size));
printf("max = %d \n", find_median(array,size));

}


void print_array(unsigned char* array, int size){
int i=0;
	for(i=0; i< size; i++){
		printf("%d \n",array[i]);	
	}
}

/////////////////// average function //////////////
void find_average(unsigned char* array, int size){

int i=0;
float avg = 0;

	for (i=0; i< size ; i ++){
	 	avg += array[i];

	}
avg = avg/size;
printf("mean = %f \n", avg);
} 

////////////////////////////////
int find_maximum(unsigned char* array, int size){


int i=0;
int max = array[0];find_median

	for (i=0; i< size ; i ++){
	 	if (max < array[i]){
		max = array[i];
		}	
	}
return max;
}
///////////////////////////
int find_minimum(unsigned char* array, int size){

int i=0;
int min = array[0];

for (i=0; i< size ; i ++){
	 if (min > array[i]){
		min = array[i];
	}
}
return min;
}
///////////////////median value 
int find_median(unsigned char* array, int size){

int i =0;
int median = array[0];

if(size%2 == 0)
{
	median = array[size/(2)];
}
return median;
}

void sort_array(unsigned char* array, int size){
int i = 0;
int j = 0;
int a= 0 ;
	for (i= 0; i< size; i++){
		for(j = i + 1; j< size; j++){
			if(array[i] < array[j]){
				a= array[i];
				array[i] = array[j];
				array[j] = a;			
				}
	     	}
	}	

print_array(array, size);

}


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

print_statistics(test, SIZE);
sort_array(test, SIZE);


}




/* Add other Implementation File Code Here */
