/*
 * main.c
 *
 *  Created on: Dec 03, 2020
 *      Author: MohamedAshry
 *
 *      Description: program that count the max number of ones between two zeros in a binary number.
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
	printf("\nThe entered number is: %d, and maximum number of One-digits is %d.", number, digitOneCounter(number));

	return 0;
}

/* ----------------------------------------------------------- */

// Function Definition:
int digitOneCounter (int number)
{
	int newNumber, counter=0, numOfIntegerBits = 31, test=0;	// Declare the default number of integer Bits (4 byte Integer)

	for (; numOfIntegerBits >= 0; numOfIntegerBits--)
	{
		newNumber = number >> numOfIntegerBits;					// Right shifting the number with the bits number till the first 1 in the binary form

		if (newNumber & 1)										// if the binary number has 1 digit then it will be anded with 1 and print 1
			counter++;
		else
		{
			if(counter>test)
			{
				test = counter ;
				counter = 0;
			}
			else
				counter=0;
		}
	}
	return test;				// return the number of One-digits

}			// end of function




