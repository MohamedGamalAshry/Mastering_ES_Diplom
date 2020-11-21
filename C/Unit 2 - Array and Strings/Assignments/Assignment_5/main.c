/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *
 *      Description: Program to search an element in an array. User must fill the array, then asks
 *      			 about a specific number and then the program returns its location in the array.
 */

#include <stdio.h>

int main ()
{
	int num , target, Array[100], i, location=0;

	printf("Enter the No. of elements: \r\n");
	scanf ("%d",&num);
	fflush(stdin); fflush(stdout);

	for (i=0 ; i<num ; i++)
	{
		scanf ("%d ",&Array[i]);
		//printf("%d ",Array[i]);
	}


	printf("\r\nEnter the element to be searched: ");
	scanf ("%d",&target);
	fflush(stdin); fflush(stdout);

	for (i=0 ; i<num ; i++)
	{
		if (Array[i]==target)
		{
			location = i+1 ;
		}

	}

	if (location ==0)
		printf("\r\nThe target number is not found in the array");
	else
		printf("\r\nThe target number was found in location: %d", location);

	return 0;
}

