/*
 * main.c
 *
 *  Created on: Nov 14, 2020
 *      Author: MohamedAshry
 */

/*
 * Description:
 * the program is used to compare three numbers entered by the user and find
 * the largest value of the the three numbers.
 *
 */

#include <stdio.h>

void main ()
	{
		// declaration and initialization:
		int first, second, third ;

		printf ("Enter the three numbers: \r\n") ;				// User to enter the three numbers
		scanf ("%d %d %d", &first, &second, &third);			// scan the three numbers from user
		fflush(stdin);
		fflush(stdout);

		if (first > second)										// compare between first and second numbers
		{
			if (first > third)									// compare between first and third numbers
				printf("The largest number is: %d", first);     // print the largest number
			else
				printf("The largest number is: %d", third);     // print the largest number
		}
		else
		{
			if (second > third)									// compare between second and third numbers
				printf("The largest number is: %d", second);	// print the largest number
			else
				printf("The largest number is: %d", third);		// print the largest number

		}				// end of if
		getchar();		// to stop program from exit
	}					// end of main
