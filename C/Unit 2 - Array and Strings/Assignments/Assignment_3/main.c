/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *
 *      Description: calculate the transpose of a matrix that is created by the user. The matrix
 *      			 dimension will be entered from the user for Rows and Coloumns. The matrix
 *      			 should be printed as well.
 */

#include<stdio.h>

int main ()
{
	//declaration and initialization of the variables
	int row, col ;
	float matrix[1000][1000];
	float transpose[1000][1000];

	// Reading rows and cols from the user:
	printf("Enter the rows and column of the matrix:");
	printf("\r\nNo. of rows is:");
	scanf("%d", &row);
	printf("\r\nNo. of cols is:");
	scanf("%d", &col);

	// Reading the elements of matrix from the user
	printf("\r\nEnter the elements of the matrix:\r\n");
	for (int i=0 ; i<row ; i++)
	{
		for (int j=0 ; j<col ; j++)
		{
			printf("\r\nEnter element %d%d:",i+1,j+1);
			scanf("%f",&matrix[i][j]);
		}
		printf("\r\n");
	}

	//---------------------------------------------------
	// printing the matrix
	printf("The entered matrix:\r\n");
	for (int i=0 ; i<row ; i++)
	{
		for (int j=0 ; j<col ; j++)
		{
			printf("%.1f ", matrix[i][j]);
		}
		printf("\r\n");
	}

	//---------------------------------------------------
	// creating the transpose of the matrix
	for (int i=0 ; i<row ; i++)
	{
		for (int j=0 ; j<col ; j++)
		{
			transpose[i][j] = matrix[i][j];		// reverse the indexing to transpose the matrix
		}

	}

	printf("The Transpose of the matrix is:\r\n");	// printing the transpose

	for (int i=0 ; i<col ; i++)
	{
		for (int j=0 ; j<row ; j++)
		{
			printf("%.1f ",transpose[j][i]);	// print each element in the transpose matrix
		}
		printf("\r\n");
	}

	return 0;
}		// end of main

