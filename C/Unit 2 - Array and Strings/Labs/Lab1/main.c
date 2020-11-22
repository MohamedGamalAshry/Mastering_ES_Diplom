/*
 * main.c
 *
 *  Created on: Nov 18, 2020
 *      Author: MohamedAshry
 *
 *      Description: Store and print the degree of 10 students
 */

#include <stdio.h>
#include <string.h>

int main ()
{
	float degrees [10];		// declaring an array of 10 students
	int count;

	for(count = 0 ; count <10 ; count++ )	// looping to get and store the degrees
	{
		printf ("Enter the degree of student No.%d\r\n",count+1);
		fflush(stdin) ; fflush(stdout);
		scanf ("%.2f", &degrees[count]);
	}

	for(count = 0 ; count <10 ; count++ )	// looping to print the students degrees
	{
		printf ("The degree of Student No. %d is: %f\r\n", count+1,degrees[count]);
	}
	return 0;

}
