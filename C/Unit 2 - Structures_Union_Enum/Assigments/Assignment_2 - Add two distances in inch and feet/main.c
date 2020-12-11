/*
 * main.c
 *
 *  Created on: Dec 11, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C Program adds he distances entered by the users in both inches and feet. The user
 *      			 enter the first two distances in feet and inch in the first structure, then the next two
 *      			 distances in the 2nd structure. Finally the total distance is printed which represent the
 *      			 total inches and feet added together after conversion.
 *
 */

// Including the required header files/directives
#include <stdio.h>

// creating a structure data type to store the distance in feet and inches
struct S_distance
{
	int feet ;			// declaring the feet variable
	float inch ;		// declaring the inch variable
};

/* ---------------------------------------------------------------------- */

// Function declarations (Functions Prototypes)

// Function that reads the distance from the user
struct S_distance ReadDistances ( );

// Function that adds the 1st and 2nd distances together
struct S_distance AddDistances (struct S_distance First_Distance, struct S_distance Second_Distance);

// The function prints complex the number in readable form
void printDistance (struct S_distance Result);

/* ---------------------------------------------------------------------- */

// Main Function

int main()
{
	struct S_distance First_Distance, Second_Distance, Result ;  	// Declare the required structures

	printf ("Enter the 1st distance below in feet and inches: \n" );
	First_Distance = ReadDistances( ) ;								// Read the first complex number from the user

	printf ("\nEnter the 2nd distance below in feet and inches: \n" );
	Second_Distance = ReadDistances( );								// Read the 2nd complex number from the user

	Result = AddDistances (First_Distance, Second_Distance);		// Add both complex numbers together

	printDistance (Result);						// print the result of addition

	return 0;
}

/* --------------------------------------------------------- */

// Functions definitions:

struct S_distance ReadDistances ( )
{
	struct S_distance Distance;

	printf ("\nEnter the distance in feet is: " );
	fflush (stdin); fflush(stdout);
	scanf ("%d", &Distance.feet );

	printf ("\nEnter the distance in inches: " );
	fflush (stdin); fflush(stdout);
	scanf ("%f", &Distance.inch );

	return Distance ;
}

/* ----------------------------------------------------------- */

struct S_distance AddDistances (struct S_distance First_Distance, struct S_distance Second_Distance)
{
	struct S_distance Result;
	int temp ;

	Result.feet = First_Distance.feet + Second_Distance.feet ;
	Result.inch = First_Distance.inch + Second_Distance.inch;

	if (Result.inch >= 12)
		{
			temp = Result.inch;
			Result.feet += temp/12 ;
			Result.inch -= ((temp/12)*12.0);
		}

	return Result ;		// Return the addition of both numbers
}

/* ----------------------------------------------------------- */

void printDistance (struct S_distance Result)
{
	// print the sum of all distances
	printf ("\nThe SUM of the distances is: %d',%.2f\".", Result.feet, Result.inch);
}

/* ----------------------------------------------------------- */
