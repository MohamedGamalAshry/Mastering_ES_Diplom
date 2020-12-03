/*
 * main.c
 *
 *  Created on: Dec 03, 2020
 *      Author: MohamedAshry
 *
 *      Description: C program that sum numbers from 1 to 100(without loop).
 */

# include <stdio.h>

// Main Function

int main()
{
	static int i = 0;				// declaring variable to increase the number
	static int sum = 0;				// declare variable to store the sum of the numbers

	if (i <= 100)
	{
		sum+=i++;						// increase the summation for each iteration
		main();						// call the function again
	}

	if (i==101)
	{
		printf("\nSum of Numbers from 0 to 100 is: %d ", sum);		// print the result
		i= 102;						// reset the iteration to prevent re-printing the summation result
	}

	return 0;
}



