/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: This program finds the ASCII value of the entered charachter
 *
 */


#include <stdio.h>
int main()
{
	char CH;
	printf("Enter a character: ");				// Ask user to enter the character
	scanf("%c",&CH);        					// store the character from user
	fflush(stdin);	fflush(stdout);

	printf("ASCII value of %c = %d", CH, CH);	// print the character as an integer value
	return 0;
}		// end of main
