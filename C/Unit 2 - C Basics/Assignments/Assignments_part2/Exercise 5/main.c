/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: C Program to Check Whether a Character is an Alphabet or not
 */


#include <stdio.h>

int main()
{
	char CH;									//declaration of char variable

	printf("Enter a character: ");				// ask user to enter a character then store it
	scanf("%c",&CH);

	if( (CH>='a' && CH<='z') || (CH>='A' && CH<='Z'))		// Check Whether a Character is an Alphabet
		printf("The %c is an Alphabet.", CH);				// print that a Character is an Alphabet
	else
		printf("The %c is not an Alphabet.", CH);			// print that a Character is not an Alphabet
	return 0;
}


