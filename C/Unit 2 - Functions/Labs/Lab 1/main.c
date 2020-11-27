/*
 * main.c
 *
 *  Created on: Nov 27, 2020
 *      Author: MohamedAshry
 *
 *      Description: C program using functions to calculate the factorial of a specific number.
 *      			The number will be entered from the user and the result of its factorial will
 *      			be displayed on the screen.
 */

#include <stdio.h>

// Declaration of Functions:
int factorial (int x) ;

int main ()
{
	int number ;		// declaration of number to calculate its factorial
	int result ;		// declare a variable to store the factorial result in

	// Reading an integer from user and store it
	printf ("Enter an Integer number: ");
	fflush (stdin); fflush(stdout);
	scanf ("%d", &number) ;

	result = factorial (number) ;		// calculate the factorial

	printf ("\r\nThe factorial of (%d) is: %d", number, result) ;	// printing the result

	return 0;
}

// Function Definition:

int factorial (int x)
{
	int fact =1 ;
	if (x==0 || x==1)
		return 1;
	else
		for (int i = x; i>1 ; i--)
		{
			fact *= i;
		}

	return fact ;
}
