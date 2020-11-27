/*
 * main.c
 *
 *  Created on: Nov 27, 2020
 *      Author: MohamedAshry
 *
 *      Description: The program calculates the minimum value in an array of 10 Num.from the user.
 *      			  the user should enter the array then the minimum value shall be calculated
 *      			  and printed on the screen.
 */

#include <stdio.h>

// Function declaration (Adding prototype of all created functions):
int calcMin (int Array[], int n) ;

int main ()
{
	int values [10];		// declaration of 10 element array
	int i;					// declaring the looping variable

	printf("Enter 10 numbers to fill a 10 Number's Array: \r\n");
	fflush(stdin);		fflush(stdout);

	for (i=0 ; i<10 ; i++)
	{
		scanf ("%d", values[i]);
	}

	printf ("\r\n The minimum number in the entered array is: %d", calcMin(values, 10));

	return 0;
}

// Function definitions:

int calcMin (int values[], int n)
{
	int minvalue;		// declaring variable for minimum value
	int i ;				// declaring looping variable - for loop

	minvalue = values [0] ;		// initializing the minvalue with first array element
	// looping inside the array and compare each element with minvalue
	for (i=1 ; i<10 ; i++)
	{
		if (values[i] <= minvalue )
			minvalue = values[i];	// store minvalue if found
	}
	return minvalue ;				// return the minvalue from the function after being found
}
