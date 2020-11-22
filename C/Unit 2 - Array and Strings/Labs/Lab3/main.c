/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *
 *      Description: calculate and print the transpose of 3*3 matrix
 */

#include<stdio.h>

int main()
{
	float matrix [3][3];		// declaring the matrix array
	float transpose [3][3];		// declaring the transpose matrix array
	int i,j;

	//reading the matrix from the user:
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf("Enter the matrix element of (%d,%d)\r\n", i,j );	// read and scan the matrix elements from user
			fflush(stdin) ; fflush(stdout);
			scanf("%f", &matrix[i][j]);
		}
	}

	//------------------------------------------------------------------------------------------

	// printing the matrix
	printf("The matrix is:\r\n");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf("%.2f ", matrix[i][j]);		// print the matrix elements each iteration
			fflush(stdin) ; fflush(stdout);

		}	//end of for loop
		printf("\r\n");							// make new line after each matrix row
	}	//end of for loop

	//------------------------------------------------------------------------------------------

	//convert the matrix to its transpose:
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			transpose [i][j] = matrix [j][i] ;	// convert the matrix elements to the transpose
		}	//end of for loop
	}	//end of for loop

	//------------------------------------------------------------------------------------------

	// printing the matrix
	printf("The transpose of the matrix is:\r\n");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf("%.2f ", transpose[i][j]);	// print the transpose matrix

		}	//end of for loop
		printf("\r\n");
	}	//end of for loop

	return 0;
}	// end of main
