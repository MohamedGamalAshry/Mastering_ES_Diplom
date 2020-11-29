/*
 * main.c
 *
 *  Created on: Nov 27, 2020
 *      Author: MohamedAshry
 *
 *      Description: program that find and print the prime numbers between two intervals entered by the user.
 */

# include <stdio.h>

// Declaring Functions(Functions Prototypes):
int primeFinder (int begin, int end);

// Main Function

int main ()
{
	int begin, end ;		// declare variables for the range limit

	printf ("Enter two numbers (intervals): ");		// ask user to enter the rang limit
	fflush(stdin);		fflush(stdout);
	scanf ("%d %d", &begin, &end);					// scan and store the range limit from user

	primeFinder (begin, end);						// call the function to find all prime numbers

	return 0;
}


/* ----------------------------------------------------------- */

// Function Definition:

int primeFinder (int begin, int end)
{
	int i, j=0, d=0, k=0, prime = 0;		// declaring the required
	int array [100];						// declaring an array to save the prime numbers in

	// check if the range is between 0 and 1
	if (begin<=1 && end==1)
	{
		printf ("There is no prime numbers between %d and %d", begin, end);
		return 0 ;
	}

	// check if the range is between 0 or 1 and 2
	else if (begin<=1 && end==2)
	{
		printf ("The prime numbers between %d and %d are: %d", begin, end, end);
		return 0 ;
	}

	// check other possible ranges
	else
	{
		for (i=begin+1; i<end ; ++i)	// looping through the whole range
		{
			if (i==2)					// in case if 2 is in the range consider it as prime and store it in array
			{
				array[j] = i;
				++j ;
			}


			else if ((i%2)!=0 && i>2)	// exclude all even number that are bigger than 2
			{

				for (d = 3; d<=i ; ++d)			// divide each number in the range on 3 till the number itself
				{
					if (i%d == 0)
						prime += 1;				// Idea is increasing the value in case of prime as each prime number is divided on 1 and itself
				}

				if (prime == 1)					// if number is prime add it to array
				{
					array[j] = i;
					++j ;
				}
				prime = 0 ;						// re-initialize the number
			}

		}	// end of for
	}

	// After checking the whole range, print the array of prime number between the range

	printf ("The prime numbers between %d and %d are: ", begin, end);

	for (k=0 ; k<j ; k++)
	{
		printf("%d ", array[k]);				// print each single value in array
	}

	return 0;
}			// end of function

