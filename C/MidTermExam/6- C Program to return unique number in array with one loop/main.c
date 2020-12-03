/*
 * main.c
 *
 *  Created on: Dec 03, 2020
 *      Author: MohamedAshry
 *
 *      Description: C program that return the unique number in an array with one loop.
 *      			 test case 1:
 *      			 		input: int a[7]={4,2,5,2,5,7,4};
 *      			 		output:7.
 *      			 test case 2:
 *      			 		input: int a[3]={4,2,4};
 *      			 		output:2.
 */

# include <stdio.h>

// Declaring Functions(Functions Prototypes):

//int checkEqual(int *array[], int element);

// Main Function

int main ()
{
	int array[7]={4,2,5,2,5,7,4};
	//int array[3]={4,2,4};
	int i, flag = 0 ;
	static int j =0;

	for (i=0; i<7; ++i)
	{
		if(j>=0)
			i=0 ;

		if (i!=j)
		{
			if(array[i]==array[j])
			{
				flag++;
			}
		}

		j++;

		if(j==6)
		{
			if(flag==0)
			{
				printf("%d ",array[i]);
			}
		}


	}		// end of for

	return 0;
}

/* ----------------------------------------------------------- */

// Function Definition:
/*
int checkEqual(int *array[], int element)
{
	int flag=0;

	if (element == array[j])
	{
		flag =1;
		printf ("==\n");
		//return flag;
	}
	else
	{
		j++;
		if(j==6 && flag==0)
			{
				flag = checkEqual(array, element);
				printf ("---\n");
				//return flag;
			}
	}
	return 0;
}
 */
// end of function




