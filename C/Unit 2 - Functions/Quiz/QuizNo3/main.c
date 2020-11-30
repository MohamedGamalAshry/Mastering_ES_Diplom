/*
 * main.c
 *
 *  Created on: Nov 30, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C program reverse the elements of an array entered by the user.
 */

/* --------------------------------------------------------------------------------- */

#include <stdio.h>

// Declaring Functions(Functions Prototypes):

void inp_array (int arr[],int size);						// Function to input the array elements
void reverse_array (int arr[],int size); 					// Function to reverse the elements of the array
void print_array (int arr[],int size); 						// Function to print the array elements

// Main Function

int main()
{
	int arr[10];						// Declaring an array of 10 elements
	int size;							// Declaring a variable to store the size of array

	printf ("Enter the size of array: ");					// Ask user to enter the size of array and store it
	fflush (stdin);		fflush (stdout);
	scanf ("%d", &size);

	printf ("\r\nEnter %d element of array\r\n", size);			// Read the elements of the array from the user
	fflush (stdin);		fflush (stdout);
	inp_array (arr, size);

	printf ("\r\nThe array elements before reverse are:");	// Print the elements of the array
	print_array (arr, size);

	reverse_array(arr, size);								// Reverse the elements of the array

	printf("\r\nThe array elements after reverse:");		// Print the reversed elements of the array
	print_array (arr, size);

}		// end of main function



/* --------------------------------------------------------------------------------------------------- */

// Functions Definition:

void inp_array(int arr[],int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
}			// end of function

/* ------------------------------------------------------ */

void print_array (int arr[], int size)
{
	int i;

	for(i=0; i<size; i++)
	{
		printf (" %d", arr[i]);
	}
}		// end of function

/* ------------------------------------------------------ */

void reverse_array (int arr[],int size)
{
	int i,j,temp;
	for(i=0, j=size-1; i<=j; i++,j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

	}

}	// end of function
