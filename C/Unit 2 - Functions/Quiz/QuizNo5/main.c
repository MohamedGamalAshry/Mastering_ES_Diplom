/*
 * main.c
 *
 *  Created on: Dec 1, 2020
 *      Author: MohamedAshry
 *      Description: This C program is used to find the 4th least significant bit in a specific number entered
 *      			 by the user.
 */

/* -------------------------------------------------------------------------------------------------------------- */

#include <stdio.h>

// Main Function

int main()
{
	int number;							// Declaring integer variable to scan it from user
	int numOfIntegerBits = 31;			// Declare the default number of integer Bits (4 byte Integer)
	int newNumber;						// Declare new variable to store the number after shifting it

	// Read and store the number from the user
	printf("Enter an integer number in decimal format:\n");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &number);

	printf("The %d in binary number system is:\n", number);

	for (; numOfIntegerBits >= 0; numOfIntegerBits--)
	{
		newNumber = number >> numOfIntegerBits;		// Right shifting the number with the bits number till the first 1 in the binary form

		if (newNumber & 1)				// if the binary number has 1 digit then it will be anded with 1 and print 1
			printf("1");
		else							// else, 0 will be printed
			printf("0");
	}

	// With shifting the number with 3 we force the 4th bit to move to the place of 1st bit
	// then by anding it with 1, we can determine if the 4th bit is 1 or 0.
	newNumber = number>>3;

	if(newNumber & 1)
		printf("\nThe 4th least significant bit is 1");		// Print the result
	else
		printf("\nThe 4th least significant bit is 0");		// Print the result
	return 0;

}		// end of main function




