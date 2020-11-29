/*
 * main.c
 *
 *  Created on: Nov 29, 2020
 *      Author: MohamedAshry
 *
 *      Description: This program calculates the power of a number using recursion. The number will be entered by the user
 *    				 and then the power will be calculated and printed on the screen
 */

# include <stdio.h>
# include <string.h>

// Declaring Functions(Functions Prototypes):

int power (int number, int toPower) ;

// Main Function

int main ()
{
	int number, toPower ;						// declaring the required variables

	printf ("Enter a number: \r\n");			// read and store the base number from the user
	fflush(stdin);		fflush(stdout);
	scanf ("%d", &number);

	printf ("Enter a number: \r\n");			// read and store the power from user
	fflush(stdin);		fflush(stdout);
	scanf ("%d", &toPower);

	printf ("\r\nThe power of %d is: %d", number, power(number, toPower));	// print the result using function recursion

	return 0;
}		// end of main


/* ----------------------------------------------------------- */

// Function Definition:

int power (int number, int toPower)
{
	if (toPower==0)
		return 1;				// case power of zero
	else if (toPower==1)
		return number;			// case of power one
	else
		return (number * power(number, toPower-1));		// power calculation
}		// end of function






