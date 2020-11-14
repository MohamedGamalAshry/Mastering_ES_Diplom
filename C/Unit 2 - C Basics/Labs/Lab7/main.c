/*
 * main.c
 *
 *  Created on: Nov 14, 2020
 *      Author: MohamedAshry
 */

#include <stdio.h>

void main ()
{
	for (int i=0 ; i<=9 ; i++)
	{
		for (int j = i; j<=9 ; j++)
			printf("%d ",j);
		printf("\r\n");
	}	//end of 2nd for
	getchar ();
}		// end of main
