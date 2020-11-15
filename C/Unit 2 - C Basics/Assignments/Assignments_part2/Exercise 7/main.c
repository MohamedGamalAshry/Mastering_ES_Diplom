/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description:  C program to display factorial of an integer if user
 *      			  enters non-negative integer
 */


#include <stdio.h>

int main()
{
	// Declaration and initialization of variables
	int number , count;
	unsigned long int factorial=1;
	// ask user to enter the desired number to calculate its factorial
	printf("Enter an integer to calculate its Factorial: ");
	scanf("%d", &number);

	if(number<0)		// case no Factorial for -ve numbers - Error
		printf("\r\n#Error#: Factorial of negative number does not exist.");
	else
		{
			for(count=1; count <= number; count++)
				factorial*= count;					// Calculate the Factorial
			printf("Factorial = %lu\n", factorial);	// Print the result on screen
		}
	return 0;
}		// end of main
