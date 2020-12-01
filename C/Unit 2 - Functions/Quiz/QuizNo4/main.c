/*
 * main.c
 *
 *  Created on: Dec 1, 2020
 *      Author: MohamedAshry
 *      Description: This C program is used to clear a specific bit in a given number.
 */

/* --------------------------------------------------------------------------------- */

#include <stdio.h>

// Declaring Functions(Functions Prototypes):
int clearbit (int number, int BitNumber);

// Main Function

int main()
{
	int number, BitNumber;

	/* Input number from user */
	printf("Enter any number: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &number);

	/* Input bit number you want to clear */
	printf("Enter nth bit to clear (0-31): ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &BitNumber);

	printf("\nBit cleared successfully.\n\n");		// Print MSG confirm the clearing process

	// Print MSG's to show the difference between the number before and after clearing the bit
	printf("Number before clearing %d bit: %d (in decimal).\n", BitNumber, number);
	printf("Number after clearing %d bit: %d (in decimal).\n", BitNumber, clearbit (number, BitNumber));

	return 0;

}		// end of main function

/* --------------------------------------------------------------------------------------------------- */

// Functions Definition:

int clearbit (int number, int BitNumber)
{
	int result ;

	// Left shifts 1 to n times, then Perform complement of the result,
	// after that perform bitwise AND with the number
 	result = number & (~(1 << BitNumber));
 	return result ;
}

// end of function


