/*
 * main.c
 *
 *  Created on: Nov 27, 2020
 *      Author: MohamedAshry
 *
 *      Description: create a pattern of numbers and print it as each line contain less number than
 *      			 the above line for example:
 *      			 0 1 2 3 4 5 6 7 8 9
 *      			 1 2 3 4 5 6 7 8 9
 *      			 2 3 4 5 6 7 8 9
 *      			 and so on
 */

# include <stdio.h>

// Function declaration (Prototypes):

void createPattern (int final_number);

// Main Function

int main ()
{
	int final_number;
	// Read and store the pattern limit from the user
	printf ("Enter the final number that represent the Pattern limit: ");
	fflush(stdin);		fflush(stdout);
	scanf ("%d", &final_number);

	printf ("\r\nThe Pattern:\r\n");
	createPattern (final_number);

	return 0;
}		// end of main

/*  ------------------------------------------------------- */

// Function definition (Function body):

void createPattern (int final_number)
{
	for (int i=0 ; i<=final_number ; i++)
		{
			for (int j = i; j<=final_number ; j++)
				printf("%d ",j);
			printf("\r\n");
		}	//end of 2nd for
}

