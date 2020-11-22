/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: MohamedAshry
 *
 *      Description: the program calculate the polynomial value for a set of inputs
 */


#include <stdio.h>
#include <string.h>


int main ()
{
	float x[5]={5,16,22,3.5,15};			// declaring and initialization of array
	float y[5];								// declaration of the result variable
	int i ;									// declaring the looping variable

	// looping to evaluate the polynomial expression
	printf("Evaluation of the polynomial y=5*x^2+3*x+2, for x = {5,16,22,3.5,15} is:\r\n");
	fflush(stdout);

	for (i=0; i<5 ; i++)
	{
		y[i] = 5*x[i]*x[i]+3*x[i]+2;			// evaluate the function
		printf("y(%.1f)=%.1f\r\n", x[i], y[i]);		// print the result
	}
	return 0;

}	// end of function
