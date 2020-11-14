/*
 * main.c
 *
 *  Created on: Nov 14, 2020
 *      Author: MohamedAshry
 */

/* Description:
 * In this program the user has to choose between calculating circle area or circle circumference.
 * The choice comes by taking a character from the keyboard using the (getche)function. If the user
 * presses „a‟ character it proceeds with area calculation and printing. If the user presses „c‟
 * character it proceeds with circumference calculation and printing. If the user presses other
 * letters the program prints an error message.
 */

#include <stdio.h>

void main ()

{
	float radius ;							// declaration of radius
	float area ;							// declaration of the area
	float Circumference ;					// declaration of circumference
	char choice ;							// declaration of choice

	printf ("Enter circle radius: \r\n");	// user to supply the radius
	scanf ("%f", &radius);
	fflush(stdin);							// clear the stdin and stdout buffer
	fflush(stdout);

	printf ("Enter your choise \r\n ");		// ask for user selection
	scanf ("%c", &choice);
	fflush(stdin);							// clear the stdin and stdout buffer
	fflush(stdout);

	switch (choice)
	{
	case 'a':								// first selection : Area calculation
	case 'A':
	{
		area = 3.14 * radius * radius ;
		printf ("Area of circle is: %f \r\n", area) ;							// print the area
	}
	break ;									// end of the first case

	case 'c':								// 2nd selection: Circumference calculation
	case 'C':
	{
		Circumference = 2 * 3.14 * radius ;
		printf ("The Circumference of the circle is: %f", Circumference);	// print the circumference
	}
	break;									// end of the 2nd case

	default:
		printf ("Wrong choice was entered. \r\n");		// Error MSG in case of wrong choice
		break;								// end of default case

	}	// end of switch

	getchar();
}		// end of main


