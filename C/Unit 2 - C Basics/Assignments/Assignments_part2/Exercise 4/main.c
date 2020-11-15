/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: C Program to Check Whether a Number is Positive or Negative
 *
 */

#include <stdio.h>

int main()
{
	float number;							// declaration of float variable

	printf("Enter a number: ");				// user to enter the number and then store it
	scanf("%f", &number);

	if (number <= 0)						// check if number is negative or zero
	{
		if (number == 0)					// check if number is 0
			printf("You entered zero.");
		else
			printf("%.2f is negative.", number);	// case -ve number
	}

	else
		printf("%.2f is positive.", number);		// case +ve number

	return 0;
}		// end of main

