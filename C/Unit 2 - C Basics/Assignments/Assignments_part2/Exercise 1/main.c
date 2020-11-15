/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: this program check if the number entered by the user is odd or even
 */

#include <stdio.h>

int main()
{
	int number;		// declaration of integer variable

	printf ("Enter an integer to be checked:");				// ask user to enter the number to be checked
	scanf ("%d", &number);									// store the number in variable

	if((number%2)==0) 										// Checking the remainder
		printf("\r\n This number %d is even.",number);		// case even number
	else
		printf("\r\n This number %d is odd.", number);		// case odd number
	return 0;

}
