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
	int n_numbers , i;
	float numbers [1000];
	float average, sum = 0.0 ;

	printf("Enter the numbers of data: ");
	scanf ("%d",&n_numbers);

	while(n_numbers > 100)
	{
		printf("\r\nERROR:: The entered number is larger than 100.\r\nYou must enter a number between 0 and 100\r\n");
		scanf ("%d",&n_numbers);
	}

	for (i = 0 ; i < n_numbers ; i++)
	{
		printf ("\r\n%d. Enter number: ", i+1);
		scanf ("%f", &numbers[i]);
		sum+= numbers[i];
	}

	average = sum/n_numbers ;
	printf("The Average is:%f",average);

	getchar();
	//return 0;
}

