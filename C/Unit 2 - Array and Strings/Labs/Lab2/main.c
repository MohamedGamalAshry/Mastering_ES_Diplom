/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *
 *      Description: the program calculate the polynomial value for a set of inputs
 */


#include <stdio.h>

void main ()
{
	float x [5]={5,16,22,3.5,15};
	float y;
	int i ;

	for (i=0; i<5 ; i++)
	{
		y = 5*x*x+3*x+2;
		printf("y(%f)=%f\r\n",x,y);
	}

}
