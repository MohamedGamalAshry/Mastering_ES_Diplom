/*
 * main.c
 *
 *  Created on: Nov 29, 2020
 *      Author: MohamedAshry
 *
 *      Description: This program calculates the factorial of a specific number entered by the user using recursion.
 *      			 then the result of the factorial wll be printed on the screen.
 */

# include <stdio.h>

// Declaring Functions(Functions Prototypes):

int calcFactorial (int number);

// Main Function

int main ()
{
	int number, result ;		// declaring required variables
	// ask user to enter a specific number
	printf ("Enter an integer number to calculate its factorial: \r\n");
	fflush(stdin);		fflush(stdout);
	scanf ("%d", &number);

	result = calcFactorial(number) ;		// call the function to calculate the factorial

	printf ("\r\nThe factorial of %d is: %d.", number, result);		// print the factorial

	return 0;
}		// end of main


/* ----------------------------------------------------------- */

// Function Definition:

int calcFactorial (int number)
{
	if (number == 1)
		return 1 ;		// in case of factorial of 1
	else
		return number * calcFactorial (number-1);		// add a recursion function

}		// end of function






