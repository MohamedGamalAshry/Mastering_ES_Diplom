/*
 * main.c
 *
 *  Created on: Dec 13, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C program calculates the area of the circle by defining the PI constant in a macro. Then
 *      			 the user will be asked to enter the radius of the circle, then the area of the circle will be
 *      			 calculated and printed on the screen.
 */

// Including the required header files/directives (Pre-Processor Part)
#include <stdio.h>
# define PI 3.14159

/* ---------------------------------------------------------------------- */

// Function declarations (Functions Prototypes)

// Function that calculates the circle of the area
double areaCirlce (float radius);

/* ---------------------------------------------------------------------- */

// Main Function

int main()
{
	float radius ;

	printf ("Enter the radius of the circle: ");
	fflush (stdin);	fflush (stdout);
	scanf ("%f", &radius);

	printf ("The Area of the circle is: %.2lf", areaCirlce (radius));

	return 0;
}

/* --------------------------------------------------------- */

// Functions definitions:

double areaCirlce (float radius)
{
	return (PI*radius*radius);
}
