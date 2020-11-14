/*
 * main.c
 *
 *  Created on: Nov 14, 2020
 *      Author: MohamedAshry
 */
/*
 * Description:
 * This program converts the temprature from Fahrenheit to Celsius.
 * The temprature will be entered from the user.
 * The temprature wil be displayed on the screen.
 */

#include <stdio.h>

void main ()
{
	//Initilaization and declaration of the required variables:
	double temprature = 0;

	// Ask the user to supply the temp. in F:
	printf ("\r\nEnter the temprature in Fahrenheit: ") ;
	scanf ("%lf",&temprature);
	fflush(stdout);
	fflush(stdin);

	/*converting the temprature from Fahrenheit to Celsius*/
	temprature = (temprature - 32.0) * (5.0/9.0);

	// Printing the result
	printf ("\r\nThe temprature in Celsius is: %lf \r\n", temprature);

	getchar ();

}
