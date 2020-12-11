/*
 * main.c
 *
 *  Created on: Dec 11, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C Program stores the student information like name, role, degrees and marks.
 *      			 then the entered information by the user will be printed on the screen, each line
 *      			 contain one information that is stored in the structure.
 *
 */

// Including the required header files/directives
#include <stdio.h>

// creating a structure data type to store the student Information
struct S_StudentInformation
{
	char name [50] ;	// declaring array of char to store student's name
	int RollNumber ;	// declaring int variabe to represent the Roll Number
	float marks ;		// declare float var. for students marks
};

/* ---------------------------------------------------------------------- */

// Function declarations (Functions Prototypes)

// Function that reads the complex number from the user
struct S_StudentInformation ReadStudentInformation ( );

// The function prints the struct contains the students information
void printStudentInfo (struct S_StudentInformation StudentInfo);

/* ---------------------------------------------------------------------- */

// Main Function

int main()
{
	struct S_StudentInformation StudentInfo ;   	// Declare the required structure
	StudentInfo = ReadStudentInformation() ;		// Read the student information from the user
	printStudentInfo (StudentInfo);				// print the student information

	return 0;
}

/* --------------------------------------------------------- */

// Functions definitions:
struct S_StudentInformation ReadStudentInformation( )
{
	struct S_StudentInformation StudentInfo;

	printf ("Enter the student information: \n");
	printf ("\tEnter the student name: ");
	fflush (stdin); fflush(stdout);
	scanf ("%[^\n]%*c", &StudentInfo.name );

	printf ("\n\tEnter the student's roll number: ");
	fflush (stdin); fflush(stdout);
	scanf ("%d", &StudentInfo.RollNumber );

	printf ("\n\tEnter the students marks: ");
	fflush (stdin); fflush(stdout);
	scanf ("%f", &StudentInfo.marks);

	return StudentInfo ;
}

/* ----------------------------------------------------------- */

// The function prints the structure contains the students information

void printStudentInfo (struct S_StudentInformation StudentInfo)
{
	// print the
	printf ("Displaying the student's Information: \n");

	printf ("\tStudent name: %s", StudentInfo.name );

	printf ("\n\tStudent's roll number: %d", StudentInfo.RollNumber);

	printf ("\n\tStudent's marks: %f", StudentInfo.marks);

}

/* ----------------------------------------------------------- */
