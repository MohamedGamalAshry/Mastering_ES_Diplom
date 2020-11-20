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
	float matrix [3][3] ;
	float transpose [3][3];
	int i,j;

	//reading the matrix from the user:
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf("Enter the matrix element of (%d,%d)\r\n", i,j );
			fflush(stdin) ; fflush(stdout);
			scanf("%f", &matrix[i][j]);
		}
	}
	// printing the matrix
	printf("The matrix is:\r\n");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf("%.2f ", matrix[i][j]);

		}
		printf("\r\n");
	}
}
