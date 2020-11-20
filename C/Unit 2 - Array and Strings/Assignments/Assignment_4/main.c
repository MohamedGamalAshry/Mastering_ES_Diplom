/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *      Description: Insert an element in an array that is already filled by the user. The user gives
 *      			 the element value and the location that it will be stored in the array, then the
 *      			 new array will be printed.
 */

#include <stdio.h>

int main ()
{
	// Declaring all the required variables:
	int num, element, location, Array[30], temp[30], i , flag =0;

	printf("\r\nEnter the No. of elements: ");	// ask the user to enter the No. of element
	scanf("%d",&num);

	for(i=0 ; i<num ; i++)						// filling the array from 1 to num
	{
		Array[i]=i+1 ;
		printf("%d ", Array[i]);
	}

	printf("\r\nEnter the element to be inserted: ");	// Ask the user to enter the element
	scanf("%d",&element);

	printf("\r\nEnter the location of the element: ");	// Ask the user to enter the location
	scanf("%d",&location);

	for(i=0 ; i<num+1 ; i++)
	{
		if (i+1==location)				// inserting the element in the location
			{
			temp [i] = element ;
			flag =1 ;
			continue ;
			}

		temp[i] = Array[i-flag] ;
		//printf("%d ", temp[i]);		// printing the new array after insertion
	}

    for(i=0 ; i<num+1 ; i++)
	{
		printf("%d ", temp[i]);		// printing the new array after insertion
	}
	return 0;

}		// end of main

