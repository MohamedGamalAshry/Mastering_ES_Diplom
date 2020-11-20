/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *
 *      Description: Write a C Program to find the sum of 2 matrix 2*2 where the elements of
 *      			 two matrices are entered by the user
 */

#include <stdio.h>

int main ()
{
	float matrix1 [2][2];
	float matrix2 [2][2];
	int i , j;

	printf ("Enter the elements of Matrix No.1: \n\r") ;
	fflush (stdin);	fflush(stdout);

	for ( i=0 ; i<2 ; i++)
	{
		for ( j=0 ; j<2 ; j++)
		{
			printf ("Enter the element of No. %d%d: \n\r",i+1,j+1);
			scanf ("%f", &matrix1[i][j]) ;
		}
	}
	return 0;
}
