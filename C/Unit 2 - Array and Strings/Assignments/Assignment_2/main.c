/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *
 *      Description: This program takes a (n) number from the user, then the data are scanned from
 *      			 the user depending on the (n) number and stored in an array, then their average
 *      			 should be calculated. *
 */

#include <stdio.h>

int main()
{
	int n_numbers , i;			// declaring the required variables
	float numbers [1000];		// declaring an array to store the data
	float average, sum = 0.0 ;	// declaring the average variable

	// read the numbers of data from the user
	printf("Enter the numbers of data: ");
	scanf ("%d",&n_numbers);

	// make sure that the entered number is between 0 and 100
	while(n_numbers > 100)
	{	// printing an Error MSG
		printf("\r\nERROR:: The entered number is larger than 100.\r\nYou must enter a number between 0 and 100\r\n");
		scanf ("%d",&n_numbers);
	}

	// Looping to fill the array with the numbers from the user
	for (i = 0 ; i < n_numbers ; i++)
	{
		printf ("\r\n%d. Enter number: ", i+1);
		scanf ("%f", &numbers[i]);
		sum+= numbers[i];
	}
	// calculate the average of the entered numbers
	average = sum/n_numbers ;
	printf("The Average is:%f",average);	// printing the average

	return 0;		// end of main
}

