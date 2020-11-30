/*
 * main.c
 *
 *  Created on: Nov 30, 2020
 *      Author: MohamedAshry
 *
 *      Description: This C program swaps 2 arrays with different lengths that must be less than the maximum
 *      			 array length then the program prints both arrays before and after swapping to prove the
 *      			 effect of the program's functionality.
 */

/* --------------------------------------------------------------------------------- */

#include <stdio.h>

// Pre-processing part

#define MAX_SIZE 100 									// Define a default maximum array size of 100 element

// Declaring Functions(Functions Prototypes):

void inputArray (int arr[], int size);					// Function to input the array elements
void printArray (int arr[], int size);					// Function to print the array elements
void swapArray (int sourceArr[], int destArr[]);		// Function to swap the elements of the array

// Main Function

int main()
{
	int sourceArr[MAX_SIZE];							// Define a source array
	int destArr[MAX_SIZE];								// Define a destination array
	int size1,size2;									// declare variable to read and store the size f both arrays

	// Read the first array size from the user and store it
	printf("Enter size of array1 (Max 100): ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &size1);

	// Read the second array size from the user and store it
	printf("Enter size of array2 (Max 100): ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &size2);

	// Input elements of destination array
	printf("Enter %d elements in source array: ", size1);
	fflush(stdin);fflush(stdout);
	inputArray(sourceArr, size1);						// Call the input function to fill the array elements

	// Input element of destination array
	printf("Enter %d elements in destination array: ", size2);
	fflush(stdin);fflush(stdout);
	inputArray(destArr, size2);							// Call the input function to fill the array elements

	/*	 Print elements of both arrays before swapping	 */

	printf("\n\nSource array before swapping: ");
	printArray (sourceArr, size1);						// call the print function to show the array before swapping

	printf("\nDestination array before swapping: ");
	printArray (destArr, size2);						// call the print function to show the array before swapping

	swapArray (sourceArr, destArr);						// call the swap function of both arrays

	printf("\n\nSource array after swapping: ");
	printArray (sourceArr, size2);						// call the print function to show the array after swapping

	printf("\nDestination array after swapping: ");
	printArray (destArr, size1);						// call the print function to show the array after swapping

	return 0;
}

// end of main function

/* --------------------------------------------------------------------------------------------------- */

// Functions Definition:

void inputArray (int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
}	// end of function

/* ---------------------------------------- */

void printArray (int arr[], int size)
{
	int i;
	// Print elements of array one by one
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
}	// end of function

/* ---------------------------------------- */

void swapArray (int sourceArr[], int destArr[])
{
	int i;
	for(i=0; i<MAX_SIZE; i++)
	{
		//write any swapping technique X-or, addition or Multiplication and division
		sourceArr[i] ^= destArr[i];
		destArr[i] ^= sourceArr[i];
		sourceArr[i] ^= destArr[i];
	}
}	// end of function
