/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: Write Code to Swap Two Numbers
 */

#include <stdio.h>

int main()
{
      float First, Second, temp;					// declaration of variables

      printf("Enter the first value: ");			// ask user to enter the first value
      scanf("%f", &First);							// store the first value
      fflush(stdin);	fflush(stdout);

      printf("\r\nEnter the second value: ");		// ask user to enter the second value
      scanf("%f", &Second);							// store the second value
      fflush(stdin);	fflush(stdout);

      temp = First;    								// First value stored in variable temp
      First = Second;       						// Second value stored in First one
      Second = temp;    							// Value of temp = First, will be stored in variable second variable

      // print the result after swapping on the screen
      printf("\nAfter swapping, First value = %.2f\n", First);
      printf("After swapping, second value = %.2f", Second);
      return 0;
}	//end of main
