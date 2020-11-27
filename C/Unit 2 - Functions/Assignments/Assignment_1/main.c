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

int main ()
{
	int begin, end ;
	//int array [1000];

	printf ("Enter two numbers (intervals): ");
	fflush(stdin);		fflush(stdout);
	scanf ("%d %d", &begin, &end);

	primeFinder (begin, end);

	return 0;
}


/* ----------------------------------------------------------- */

// Function Definition:

int primeFinder (int begin, int end)
{
	int i,j,k;
	int array [100];

	if (begin<=1 && end<=1)
		{
		printf ("There is no prime numbers between %d and %d", begin, end);
		return 0 ;
		}

	/* ----------------------------------------------------------- */

	else if (begin<=1 && end>=2)
	{
		printf ("The prime numbers between %d and %d are: %d", begin, end, end);
		return 0 ;
	}

	/* ----------------------------------------------------------- */

	else
	{
		for (i=begin; i<=end ; ++i)
		{
			if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%11!=0)
				{
					array [j] = i ;
					++j ;
				}
		}

		printf ("The prime numbers between %d and %d are: ", begin, end);

		for (k=0 ; k<j ; k++)
			{
				printf("%d ", array[k]);
			}
	}

	return 0;
}







