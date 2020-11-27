/*
 * main.c
 *
 *  Created on: Nov 27, 2020
 *      Author: MohamedAshry
 *
 *      Description: the program finds a specific name from a set of names entered/saved by the user
 *      			 from an array of names.
 */

#include <stdio.h>

// Declaration of Functions:
int findName(char names[][10], int length, char name[]);

int main ()
{
	char names [][10] = {"Mohamed","Ahmed","Ali","Belal","Adham","Hamza"} ;
	char name [20] ;
	int length;

	printf("Enter your name to log-in:\r\n") ;
	fflush(stdin);		fflush(stdout);
	scanf("%[^\n]%*c", &name);

	length = sizeof(names)/ sizeof(names[0]);

	if(findName(names, length, name)==1)
		printf ("Welcome to Embedded System Mr. %s", name);
	else
		printf ("Your name is not on the list Mr. %s, check it again", name);

	return 0;
}

// Function Definition

int findName(char names[][10], int length, char name[])
{
	int i ;
	int found = 0 ;

	for (i=0 ; i<length ; i++)
	{
		//printf("%s\r\n", names[i]);	//for debugging
		//printf("%s\r\n", name);		//for debugging

		if (*names[i]==*name)
			found = 1;
	}
	return found;
}
