/*
 * main.c
 *
 *  Created on: Nov 14, 2020
 *      Author: MohamedAshry
 */

/*
 * Description:
 * the program is used to compare three numbers entered by the user and find
 * the largest value of the the three numbers.
 *
 */

#include <stdio.h>

void main ()
	{
		// declaration and initialization:
		int first, second, third ;

		printf ("Enter the three numbers: \r\n") ;
		scanf ("%d %d %d", &first, &second, &third);
		fflush(stdin);
		fflush(stdout);

		if (first > second)
		{
			if (first > third)
				printf("The largest number is: %d", first);
			else
				printf("The largest number is: %d", third);
		}
		else
		{
			if (second > third)
				printf("The largest number is: %d", second);
			else
				printf("The largest number is: %d", third);

		}
		getchar();		// to stop program from exit
	}
