/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: Write C Code to Swap Two Numbers without Temp variable.
 */

#include<stdio.h>

#include <stdio.h>

int main()
{
	float First, Second;							// declaration of variables

	printf("Enter the first value: ");				// ask user to enter the first value
	scanf("%f", &First);							// store the first value
	fflush(stdin);	fflush(stdout);

	printf("\r\nEnter the second value: ");			// ask user to enter the second value
	scanf("%f", &Second);							// store the second value
	fflush(stdin);	fflush(stdout);

	printf("Before swap First=%f Second=%f", First, Second);
	fflush(stdout);
	First  = First + Second;
	Second = First - Second;
	First  = First - Second;

	printf("\nAfter swap First=%f Second=%f", First, Second);
	return 0;
}
