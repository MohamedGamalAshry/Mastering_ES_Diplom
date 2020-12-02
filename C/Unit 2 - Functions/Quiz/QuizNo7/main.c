/*
 * main.c
 *
 *  Created on: Dec 2, 2020
 *      Author: MohamedAshry
 *
 *      Description: This program finds and print the last occurrence of a number in a list of
 *      			 numbers entered in an array by the user. If the number in the list, then
 *      			 it's index will be printed, if not, then we print (-1).
 */

# include <stdio.h>

// FUnction Declaration (Prototypes of the Functions)
void find_lastindex(int arr[],int num);

// Main Function (Program start point)
int main()
{
	int arr[10]={10,20,5,8,9,20,5,45,90,10};		// Define an array of numbers
	int x;											// declare a variable for the number to be fined

	printf("Enter your search number:\n");		// Ask the user to enter a number to be searched
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);									// scan and store the number

	find_lastindex(arr,x);							// call function to check the index

}		// end of function

/* --------------------------------------------------------------------------- */

// Function definition (FUnction body):

void find_lastindex (int arr[],int num)
{
	int i, k=-1;				// initialize k=-1 in case the number is not found to return -1

	for(i=0;i<10;i++)			// Looping through the array
	{
		if(num==arr[i])
			k=i;				// save the index of the number
		else
			continue;

	}

	printf("\nThe index of %d is: %d", num, k);		// Print the index of the number

}			// end of function
