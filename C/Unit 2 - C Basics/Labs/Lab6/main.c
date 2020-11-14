/*
 * main.c
 *
 *  Created on: Nov 14, 2020
 *      Author: MohamedAshry
 */
/* Description:
 * The program calculate the average of the entered students degree.
 * the user has the right to enter as many as degrees and at last
 * the program will display the average degree.
 */

#include <stdio.h>

void main()
{
	// declaration and initialization
	int studentsNumber, degree ;
	float sum = 0 ;
	float average ;

	printf("Enter the number of students: ");			// ask user to enter the number of students
	scanf("%d", &studentsNumber);
	fflush(stdin);
	fflush(stdout);

	for (int i=0 ; i<studentsNumber ; i++)
		{
			printf("\r\nEnter the degree of student number (%d):",i+1);
			scanf("%d", &degree);						// scan the degree of each single student
			fflush(stdin);
			fflush(stdout);
			sum += degree ;
		}			// end of for

	average = sum/studentsNumber;						// calculate the average
	printf("\r\nAverage degree is: %f", average );		// print the average degree
	getchar();

}			// end of main
