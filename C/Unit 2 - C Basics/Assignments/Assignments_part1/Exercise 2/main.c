/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: C Program to Print a Integer Entered by a User
 */

#include <stdio.h>

int main()
{
    int number;										// declaring an integer variable
    printf("Enter an integer: ");  					// ask the user to enter the number
    scanf("%d",&number);   							// scan the integer and store it
    printf("\r\nYou have entered: %d",number);		// print the entered number
    return 0;
}	// end of main
