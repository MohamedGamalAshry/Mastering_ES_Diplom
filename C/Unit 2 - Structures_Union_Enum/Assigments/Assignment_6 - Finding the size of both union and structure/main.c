/*
 * main.c
 *
 *  Created on: Dec 13, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C program demonstrate the difference between the size of Union and structure in memory.
 *      			 a union and a structure will be defined globally and then printed the size of both of them on
 *      			 the screen in main program.
 */

// Including the required header files/directives (Pre-Processor Part)
#include <stdio.h>

/* ---------------------------------------------------------------------- */

union U_job					// Define a union
{
	char name [32] ;
	float salary;
	int worker_no;
} U_union;

struct S_job				// Define a structure
{
	char name [32];
	float salary;
	int worker_no;
} S_structure;

/* ---------------------------------------------------------------------- */

// Main Function

int main ()
{
	// print the size of union and structure
	printf ("Size of the union is: %d", sizeof (U_union));
	printf ("\nSize of the structure is: %d", sizeof (S_structure));

	return 0;
}


