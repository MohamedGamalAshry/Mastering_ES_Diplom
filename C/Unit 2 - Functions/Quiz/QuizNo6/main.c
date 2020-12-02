/*
 * main.c
 *
 *  Created on: Dec 2, 2020
 *      Author: MohamedAshry
 *
 *      Description: This program check if a given number (entered by the user) is power of 3.
 *      			 for example 9 is equal to 3 to the power of 3.
 */

# include <stdio.h>
# include <math.h>

// FUnction Declaration (Prototypes of the Functions)
int checkPowerof3 (int number);

// Main Function (Program start point)
int main ()
{
	unsigned int number;						// Declaring a variable for the number entered by the user

	printf ("Enter an integer number:\r\n");	// Ask user to enter the number to be checked
	fflush(stdin);		fflush(stdout);
	scanf ("%d", &number);						// store the entered number in the variable

	// call function to check if the entered number is to power of 3 or not:
	checkPowerof3(number) ? printf("%d ==> 0", number) : printf("%d ==> 1", number) ;

	return 0;
}			// end of function

/* --------------------------------------------------------------------------- */

// Function definition (FUnction body):
int checkPowerof3 (int number)
{
	double i = log (number)/log(3) ;		// find the log3 of the entered number
	return i == trunc(i);					// return true if log3 is an integer

}		// end of function
