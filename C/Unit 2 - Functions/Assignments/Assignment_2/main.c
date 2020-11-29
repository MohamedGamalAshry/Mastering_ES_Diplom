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
	int number, result ;

	printf ("Enter an integer number to calculate its factorial: \r\n");
	fflush(stdin);		fflush(stdout);
	scanf ("%d", &number);

	result = calcFactorial(number) ;

	printf ("\r\nThe factorial of %d is: %d.", number, result);

	return 0;
}


/* ----------------------------------------------------------- */

// Function Definition:

int calcFactorial (int number)
{
	if (number == 1)
		return 1 ;
	else
		return number * calcFactorial (number-1);

}






