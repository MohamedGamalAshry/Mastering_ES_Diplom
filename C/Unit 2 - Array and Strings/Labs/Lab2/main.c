/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *
 *      Description: the program calculate the polynomial value for a set of inputs
 */


#include <stdio.h>

int main ()
{
	float x [5]={5,16,22,3.5,15};
	float y;
	int i ;

	for (i=0; i<5 ; i++)
	{
		y = 5*x[i]*x[i]+3*x[i]+2;
		printf("y(%.2f)=%.2f\r\n",x,y);
	}
	return 0;

}
