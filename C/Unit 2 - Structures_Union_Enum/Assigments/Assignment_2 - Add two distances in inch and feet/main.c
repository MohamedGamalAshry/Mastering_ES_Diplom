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
	// Declare the required structures
	struct S_distance First_Distance, Second_Distance, Result ;

	// Read the first distance from the user
	printf ("Enter the 1st distance below in feet and inches: \n" );
	First_Distance = ReadDistances( ) ;

	// Read the 2nd distance number from the user
	printf ("\nEnter the 2nd distance below in feet and inches: \n" );
	Second_Distance = ReadDistances( );

	// Add both distances
	Result = AddDistances (First_Distance, Second_Distance);

	printDistance (Result);		// print the result of addition

	return 0;
}   // end of main function

/* --------------------------------------------------------- */

// Functions definitions:

struct S_distance ReadDistances ( )
{
	struct S_distance Distance;   // declare a structure to be returned with the stored distances

	printf ("\nEnter the distance in feet is: " );		// Read distance in feet from user
	fflush (stdin); fflush(stdout);
	scanf ("%d", &Distance.feet );

	printf ("\nEnter the distance in inches: " );		// Read distance in inch from user
	fflush (stdin); fflush(stdout);
	scanf ("%f", &Distance.inch );

	return Distance ;		// return both distances in feet and inch
}

/* ----------------------------------------------------------- */

struct S_distance AddDistances (struct S_distance First_Distance, struct S_distance Second_Distance)
{
	struct S_distance Result;		// declare structure to store the addition result
	int temp ;						// declare a temporary variable

	Result.feet = First_Distance.feet + Second_Distance.feet ;	// add distances in feet
	Result.inch = First_Distance.inch + Second_Distance.inch;	// add distances in inch

	if (Result.inch >= 12)			// check if inches contain more than one feet
		{
			temp = Result.inch;
			Result.feet += temp/12 ;			// add the feet in inches to the feet addition result
			Result.inch -= ((temp/12)*12.0);	// subtract the feet in inches from the original inches
		}

	return Result ;		// Return the addition of both distances after conversion and addition
}

/* ----------------------------------------------------------- */

void printDistance (struct S_distance Result)
{
	// print the sum of all distances in feet and inches
	printf ("\nThe SUM of the distances is: %d',%.2f\".", Result.feet, Result.inch);
}

/* ----------------------------------------------------------- */
