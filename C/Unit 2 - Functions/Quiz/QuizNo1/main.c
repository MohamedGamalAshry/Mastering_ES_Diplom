/*
 * main.c
 *
 *  Created on: Nov 30, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C program takes a string from the user and check if it the same USERNAME or not. The entered username will be
 *      			 compared to the user name in DB (stored in Program). Then a MSG is printed on the screen to tell the user if the
 *      			 entered name is the same or different.
 */

#include <stdio.h>

// Declaring Functions(Functions Prototypes):

int compare(char Name_DB[], char userName[]);

// Main Function

int main()
{
	// Declaring two array of characters to store both the name in DB and the name from the user
	char Name_DB[100]="Mohamed";
	char userName[100];

	// Ask the user to store his User name in the DB
	printf("please enter your user name\n");
	fflush(stdin);fflush(stdout);
	scanf ("%[^\n]%*c",userName);

	if (compare(Name_DB, userName) == 1)			// compare the entered user name with Data Base
		printf("Welcome %s.\n", userName);			// case correct user name
	else
		printf("Wrong user name.\n");				// case wrong user name

	return 0;
}		// end of main function

/* ----------------------------------------------------------- */

// Function Definition:

int compare(char Name_DB[], char userName[])
{
	int i = 0;

	while (Name_DB[i] == userName[i])						// start looping by compare first char. in both user name and DB
	{
		if (Name_DB[i] == '\0' || userName[i] == '\0')		// break the loop if one of each user name is ended
			break;
		i++;												// increase looping iterator to the next character
	}

	if (Name_DB[i] == '\0' && userName[i] == '\0') 			// in case both strings ended together with the same character
		return 1;
	else
		return 0;											// both strings are different

}			// end of function
