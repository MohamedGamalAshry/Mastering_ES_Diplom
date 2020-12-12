/*
 * main.c
 *
 *  Created on: Dec 12, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C Program adds two complex numbers using structures and Functions. There will be
 *      			 a function to read the complex number parameters from the user and a function that prints
 *      			 the complex numbers, and another function that adds the two complex numbers together.
 *      			 Then there is a function that prints the complex number on the screen after reading it from
 *      			 the user and after the adding process.
 *
 */

// Including the required header files/directives
#include <stdio.h>

// creating a structure data type to store the complex number
struct SComplex
{
	double m_R ;	// declaring the Real part of the complex number
	double m_I ;	// declaring the Imaginary part of the complex number
};

/* ---------------------------------------------------------------------- */

// Function declarations (Functions Prototypes)

// Function that reads the complex number from the user
struct SComplex ReadComplex ();

// Function that adds the real and imaginary part of both complex numbers
struct SComplex AddComplex (struct SComplex First_Number, struct SComplex Second_Number);

// The function prints complex the number in readable form
void printComplex (char name[], struct SComplex Result);

/* ---------------------------------------------------------------------- */

// Main Function

int main()
{
	struct SComplex First_Number, Second_Number, Result ;   // Declare the required structures

	First_Number = ReadComplex () ;							// Read the first complex number from the user
	Second_Number = ReadComplex ();							// Read the 2nd complex number from the user
	Result = AddComplex (First_Number, Second_Number);		// Add both complex numbers together

	printComplex ("Result", Result);						// print the result of addition

	return 0;
}

/* --------------------------------------------------------- */

// Functions definitions:

struct SComplex ReadComplex ()
{
	struct SComplex ComplexNumber;		// declare a structure to return the scanned number from the user

	printf ("Enter real part and imaginary part of complex number respectively: \n");
	fflush (stdin); fflush(stdout);
	scanf ("%lf", &ComplexNumber.m_R);	// read the real part of the complex number
	scanf ("%lf", &ComplexNumber.m_I);  // read the imaginary part of the complex number

	return ComplexNumber ;
}

/* ----------------------------------------------------------- */

struct SComplex AddComplex (struct SComplex First_Number, struct SComplex Second_Number)
{
	struct SComplex ComplexNumber;
	// Perform addition for real parts and imaginary parts together
	ComplexNumber.m_R = First_Number.m_R + Second_Number.m_R ;
	ComplexNumber.m_I = First_Number.m_I + Second_Number.m_I ;

	return ComplexNumber ;		// Return the addition of both numbers
}

/* ----------------------------------------------------------- */

void printComplex (char name[], struct SComplex Result)
{
	// print the complex number in its mathematical form
	printf ("\r\n%s = %.2lf + %.2lf i \r\n", name, Result.m_R, Result.m_I);
}

/* ----------------------------------------------------------- */
