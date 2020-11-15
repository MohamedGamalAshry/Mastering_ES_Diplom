/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: This program provide the summation of all natural numbers
 *      			 from 0 to the entered number by the user
 */

#include <stdio.h>

int main ()
{
	int number, counter , sum = 0;		// declaration and initialization of the required variables

	printf ("Enter a number to add all number from 0 to it: ") ;	// user to enter the number
	scanf ("%d", number) ;				// store the number in the variable

	for (counter = 0 ; counter <= number ; counter++)
	{
		sum += counter ;				// sum all number from 0 till the entered number
	}
	printf ("the total is: %d", sum);	// print the result of summation on screen
	return 0;
}		// end of main
