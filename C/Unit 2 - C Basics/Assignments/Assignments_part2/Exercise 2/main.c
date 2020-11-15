/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: this program check if the character is vowel or consonant
 */

#include <stdio.h>

int main()
{
	char CH;		// declaration of char variable

	printf ("Enter an character to be checked:");				// ask user to enter the character to be checked
	scanf ("%c", &CH);									     	// store the character in variable

	// Checking the character
	if(CH=='a'||CH=='A'||CH=='i'||CH=='I'||CH=='e'||CH=='E'||CH=='o'||CH=='O'||CH=='u'||CH=='U')
		printf("\r\n This character %c is VOWEL.", CH);			// case VOWEL
	else
		printf("\r\n This number %d is CONSONANT.", CH);		// case CONSONANT
	return 0;

}



