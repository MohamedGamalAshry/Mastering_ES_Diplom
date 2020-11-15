/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: Program to Add Two Integers and display the result on the screen
 *
 */


#include <stdio.h>

int main( )
{
    int firstNumber, secondNumber, total;				// declaration of the required variables

    printf("Enter two integer numbers: ");				// ask the user to enter the number
    scanf("%d %d", &firstNumber, &secondNumber); 		// Stores the two numbers entered by user in variable num1 and num2 */
    fflush(stdin) ; fflush(stdout);

    total = firstNumber + secondNumber;     			// Performs addition and stores it
    printf("Sum: %d",total);  							// Displays the result
    return 0;
}			// end of main
