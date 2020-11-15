/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: Program to Multiply two Floating Point Numbers and display the result
 */


#include <stdio.h>
int main( )
{
	float number_1, number_2, Result;				//declaration of variables

    printf("Enter two numbers: ");					// ask user to enter the numbers
    scanf("%f %f",&number_1,&number_2);        		// Store the two floating point numbers entered by use
    fflush(stdin) ; fflush(stdout);

    Result = number_1*number_2;  					// calculate the result of  multiplication
    printf("Product: %f",Result);
    return 0;
}		// end of main
