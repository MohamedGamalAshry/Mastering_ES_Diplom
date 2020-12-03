/*
 * main.c
 *
 *  Created on: Dec 03, 2020
 *      Author: MohamedAshry
 *
 *      Description: program that counts the number of ones in binary number. The user will enter a number
 *      			 then it will be converted to binary, then the number of ones will be counted and then
 *      			 printed on the screen
 */

# include <stdio.h>

// Declaring Functions(Functions Prototypes):
int digitOneCounter (int number);

// Main Function

int main ()
{
	int number;							// Declaring integer variable to scan it from user

	// Read and store the number from the user
	printf("Enter an integer number in decimal format:\n");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &number);

	// Print the result
	printf("\nThe entered number is: %d, and it contains %d One-digits.", number, digitOneCounter(number));

	return 0;
}

/* ----------------------------------------------------------- */

// Function Definition:
int digitOneCounter (int number)
{
	int newNumber, counter=0, numOfIntegerBits = 31;	// Declare the default number of integer Bits (4 byte Integer)

	for (; numOfIntegerBits >= 0; numOfIntegerBits--)
	{
		newNumber = number >> numOfIntegerBits;			// Right shifting the number with the bits number till the first 1 in the binary form

		if (newNumber & 1)		// if the binary number has 1 digit then it will be anded with 1 and print 1
			counter++;
	}
	return counter;				// return the number of One-digits

}			// end of function




