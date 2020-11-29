/*
 * main.c
 *
 *  Created on: Nov 29, 2020
 *      Author: MohamedAshry
 *
 *      Description: This program prints a sentences entered by the user in a reverse order using a user
 *      			 defined function for reversing.
 */

# include <stdio.h>
# include <string.h>

// Declaring Functions(Functions Prototypes):

void Reverser (char array[], int length);


// Main Function

int main ()
{
	char array[100];			// declaring an array to store the string
	int length ;				// declaring variable to store array length

	printf ("Enter a sentences to be reversed: \r\n");		// read and store a sentences from the user
	fflush(stdin);	fflush(stdout);
	scanf ("%[^\n]%*c", array) ;

	printf ("\r\n" );			// printing new line

	length = strlen(array) ;	// find array length
	Reverser (array, length);	// call the function to reverse the sentences

	return 0;
}		// end of main


/* ----------------------------------------------------------- */

// Function Definition:

void Reverser (char array[], int length)
{
	for (int i=(length-1) ; i>=0 ;--i)	// Looping to reverse the sentences
	{
		printf ("%c", array[i]);		// print each character
	}

}		// end of function






