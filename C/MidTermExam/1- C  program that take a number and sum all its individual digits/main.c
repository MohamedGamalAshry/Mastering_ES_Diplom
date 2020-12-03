/*
 * main.c
 *
 *  Created on: Dec 3, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C program takes a number and sum its all individual digits. The user enter
 *      			 a specific number and then the program sums its digit and print the result on
 *      			 the screen.
 */

/* -------------------------------------------------------------------------- */

# include <stdio.h>

// Function declaration:
int sumDigits (int number) ;

// Main Function
int main ()
{
	int number ;					// Declare a variable for the number entered from the user

	// Ask the user to enter a number
	printf ("\nEnter a number to sum its all digits: ");
	fflush(stdin);		fflush(stdout);
	scanf ("%d", &number);			// scan and store a number from the user

	// Print the result of the digits sum
	printf ("\nThe Sum of the entered number digits is: %d.", sumDigits(number) );

	return 0;
}				// end of main

// Function Definition:

int sumDigits (int number)
{
	int sum = 0;				// Declare a variable to store the accumulative sum

	while ((number/10)!=0)
	{
		sum += number%10 ;		// add each single digit to the sum
		number = number/10;		// decrease the main number
	}

	return sum+number;			// return the sum and the last digit of the number
}	// end of Function


