/*
 * main.c
 *
 *  Created on: Nov 21, 2020
 *      Author: MohamedAshry
 *
 *      Description: Calculate the string length manually without using the strlen function.
 */

#include <stdio.h>


int main ()
{
	char string [1000] ;
	int i;

	printf ("Enter a string: ");						// Reading and store a string from the user
	fflush(stdin); fflush(stdout);
	scanf ("%[^\n]%*c",string);

	for ( i=0 ; i<1000 ; i++ )
	{
		if (string[i]== '\0')
			break ;
	}
	printf ("The string length is: %d ", i);		// Reading and store a string from the user
	return 0;
}
