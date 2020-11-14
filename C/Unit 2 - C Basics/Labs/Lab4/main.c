/*
 * main.c
 *
 *  Created on: Nov 14, 2020
 *      Author: MohamedAshry
 */

/*
 * Description: Calculate the minimum of two numbers
 */

#include <stdio.h>

void main ()
{
	int a, b ;								// declaration of varialbles

	printf("Enter the two numbers: \r\n");	// Ask user to enter the two numbers
	scanf("%d %d",&a ,&b);					// scan the numbers from the user
	fflush(stdin);
	fflush(stdout);

	printf("the minimum number is: %d", (a>b) ?b:a);	// print the minimum number through in-line condition
	getchar();

}	// end of main
