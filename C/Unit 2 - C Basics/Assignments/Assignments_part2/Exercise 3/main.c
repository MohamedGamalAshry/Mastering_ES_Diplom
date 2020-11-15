/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: C Program to Find the Largest Number Among Three Numbers
 *
 */

#include <stdio.h>

int main()
{
	double Number_1, Number_2, Number_3;						// declaration for the three numbers as double

	printf("Enter three different numbers: ");					// Ask user to enter the three numbers
	scanf("%lf %lf %lf", &Number_1, &Number_2, &Number_3);		// Store the the three numbers

	// check that Number_1 is the largest
	if (Number_1 >= Number_2 && Number_1 >= Number_3)
		printf("%.2f is the largest number.", Number_1);

	// check that Number_2 is the largest
	if (Number_2 >= Number_1 && Number_2 >= Number_3)
		printf("%.2f is the largest number.", Number_2);

	// check that Number_3 is the largest
	if (Number_3 >= Number_1 && Number_3 >= Number_2)
		printf("%.2f is the largest number.", Number_3);

	return 0;
}	// end of main
