/*
 * main.c
 *
 *  Created on: Dec 3, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C function takes an integer number from the user and calculate
 *      			 it's square root, then the result will be displayed on the screen.
 */

/* -------------------------------------------------------------------------- */

#include <math.h>
#include <stdio.h>

// Function declaration:
double SquareRoot(double number);

// Main Function
int main ()
{
	double number ;					// Declare a variable for the number entered from the user

	// Ask the user to enter a number
	printf ("\nEnter a number to find its square root: ");
	fflush(stdin);		fflush(stdout);
	scanf ("%lf", &number);			// scan and store a number from the user

	// Print the result of the square root
	printf ("\nThe square root of %.3lf is: %.3lf.", number, SquareRoot(number) );

	return 0;
}				// end of main

// Function Definition:
double SquareRoot(double number)
{
    return sqrt(number);
}	// end of Function


