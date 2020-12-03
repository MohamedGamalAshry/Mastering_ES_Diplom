/*
 * main.c
 *
 *  Created on: Dec 03, 2020
 *      Author: MohamedAshry
 *
 *      Description: program that reverse the digits of a number entered by the user and print it.
 */

# include <stdio.h>

// Declaring Functions(Functions Prototypes):
int reverseMe (int number);

// Main Function

int main ()
{
	int number;											// declare variable for the entered number

	printf ("Enter a numbers to be reversed: \n");		// ask user to enter a number
	fflush(stdin);		fflush(stdout);
	scanf ("%d", &number);

	reverseMe (number);									// call the function to find all prime numbers

	return 0;
}

/* ----------------------------------------------------------- */

// Function Definition:
int reverseMe (int number)
{
	int digits[100], i, length=0 ;

	for (i=0; i<=100; i++)
		{
			if((number%10) != 0 && number<10)
				{
					digits[i]= number;
					++length;
					++i;
					break;
				}
			digits[i]= number%10;						// scan and store the entered number
			number = number/10;
			++length;
		}

	for (i=0; i<length;i++)
		{
			printf ("%d", digits[i]);						// scan and store the entered number
		}

	return 0;
}			// end of function




