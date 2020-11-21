/*
 * main.c
 *
 *  Created on: Nov 21, 2020
 *      Author: MohamedAshry
 *
 *      Description: Program to find the frequency of a specific character in a string entered by the user.
 *      			The program asks the user to enter a string and then asks him for a specific character
 *      			to check its existence in the string and how many times it is found in the string.
 */

#include <stdio.h>
#include <string.h>

int main ()
{
	// Declaring the required variables
	char string [1000] ;						// initialize an array of characters
	char target;								// define a char for the target searched character
	int count=0, i, length ;					// define variable for the frequency

	printf ("Enter a string: ");				// Reading and store a string from the user
	scanf ("%[^\n]%*c",string);
	//gets(string);
	fflush(stdin); fflush(stdout);

	printf ("\r\nEnter a specific character: ");		// Reading and store a string from the user
	scanf ("%c",&target);
	fflush(stdin); fflush(stdout);

	length = strlen(string);					// find the string length

	for (i=0 ; i<length ; i++)
	{
		if (string[i]==target)
		{
			count+=1 ;							// indicate the frequency of the character
		}
	}

	if (count != 0)
		printf ("\r\nThe Frequency of character '%c' is %d.", target, count );		// Reading and store a string from the user
	else
		printf ("\r\nThe character '%c' is not in the string.", target);			// Reading and store a string from the user

	return 0;

}	// end of main



