/*
 * main.c
 *
 *  Created on: Nov 22, 2020
 *      Author: MohamedAshry
 *
 *      Description: the program is used to reverse the entered string.
 */

#include <stdio.h>
#include <string.h>

int main ()
{
	char string[100] ;				// declaring an array to store the entered string from the user
	char reverse[100];				// declaring an array to store the reversed string
	int length ;

	printf("Enter a string: ");		// ask user to enter the string
	fflush(stdin) ;		fflush(stdout) ;
	scanf ("%[^\n]%*c",string);

	length = strlen(string);
	for (int i=0; i<length ; i++)
	{
		reverse [i] = string[length-i-1] ;	// reverse the string
	}

	reverse[length]= 0;				// end the string with null character
	// print the original and reversed string:
	printf("\r\nThe entered string is: %s\r\nThe reversed string is:  %s",string, reverse);

	return 0;
}

