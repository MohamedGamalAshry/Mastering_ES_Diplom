/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *
 *      Description: Define 1D array of 1000 element and fill it with a random values using rand() function
 *      			 between 1 and 1000, then search and counts the number of values that satisfy the following condition:
 *      			 	the previous and the next values is lower than the center value.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int x [1000];
	int i , count = 0;

	for (i=0 ; i<1000 ; i++)
	{
		x [i] = rand() % 1000;
		//printf("%d \r\n", x[i])
	}

	for (i=1 ; i<999 ; i++)
	{
		if (x[i] > x[i-1] && x[i] > x[i+1] )
		{
			printf(" The array element No. %d fulfill the condition\r\n", x[i]);
			count+= 1;
		}
	}
	printf(" The total array elements that fulfill the condition is: %d\r\n", count);

}

