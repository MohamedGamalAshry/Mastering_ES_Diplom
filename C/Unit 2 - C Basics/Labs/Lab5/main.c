/*
 * main.c
 *
 *  Created on: Nov 14, 2020
 *      Author: MohamedAshry
 */

/* description:
 * calculate the sum of numbers between 1 to 99.
 */

#include <stdio.h>

void main ()
{
	int number, sum=0;
	for (number = 0; number<=99; number++)
		sum += number;
	printf ("The summation of the numbers between 1 to 99 is: %d",sum);
	getchar();
}
