/*
 * main.c
 *
 *  Created on: Dec 12, 2020
 *      Author: MohamedAshry
 *
 *      Description: this program stores the information of students in a structure. The user should enter the
 *      			 information like name, mark and roll in the structure. The program should store the information
 *      			 of ten students and then print the entered data on screen.
 */

// Including the required header files/directives
#include <stdio.h>

// creating a structure data type to store the student Information
struct S_StudentInformation
{
	char name [50] ;	// declaring array of char to store student's name
	int RollNumber ;	// declaring int to represent the Roll Number
	float marks ;		// declare float var. for students marks
};

/* ---------------------------------------------------------------------- */

// Function declarations (Functions Prototypes)

// Function that reads the complex number from the user
struct S_StudentInformation ReadStudentInformation ( );

// The function prints the structure contains the students information
void printStudentInfo (struct S_StudentInformation StudentInfo);

/* ---------------------------------------------------------------------- */

// Main Function

int main()
{
	struct S_StudentInformation StudentInfo ;   		// Declare the required structure
	struct S_StudentInformation StudentsData [10] ;		// Declare an array that holds all students information
	int NumOfStudents = 10, i ;							// Declare variable for number of students

	printf ("Enter the information of 10 Students:\n");

	for ( i=0; i<NumOfStudents; ++i)
	{
		printf ("=======================================") ;
		printf ("\nEnter the information of student No.[%d]:\n", i+1);
		StudentInfo = ReadStudentInformation() ;			// Read the student information from the user
		StudentsData [i] = StudentInfo ;
	}

	printf ("\n#################################################\n") ;
	printf ("\nDisplaying the information of the students:\n");

	for ( i=0; i<NumOfStudents; ++i)
	{
		printStudentInfo (StudentsData [i]);						// print the student information
	}

	return 0;
}

/* --------------------------------------------------------- */

// Functions definitions:
struct S_StudentInformation ReadStudentInformation( )
{
	struct S_StudentInformation StudentInfo;

	//printf ("Enter the student information: \n");
	printf ("\nEnter the student name: ");
	fflush (stdin); fflush(stdout);
	scanf ("%[^\n]%*c", &StudentInfo.name );

	printf ("\nEnter the student's roll number: ");
	fflush (stdin); fflush(stdout);
	scanf ("%d", &StudentInfo.RollNumber );

	printf ("\nEnter the students marks: ");
	fflush (stdin); fflush(stdout);
	scanf ("%f", &StudentInfo.marks);

	return StudentInfo ;
}

/* ----------------------------------------------------------- */

// The function prints the structure contains the students information

void printStudentInfo (struct S_StudentInformation StudentInfo)
{
	printf ("\n=======================================") ;

	printf ("\nStudent name: %s", StudentInfo.name );

	printf ("\nStudent's roll number: %d", StudentInfo.RollNumber);

	printf ("\nStudent's marks: %.2f", StudentInfo.marks);

}

/* ----------------------------------------------------------- */

