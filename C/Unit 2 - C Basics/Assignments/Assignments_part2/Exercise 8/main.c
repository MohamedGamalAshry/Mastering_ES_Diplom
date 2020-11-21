/*
 * main.c
 *
 *  Created on: Nov 15, 2020
 *      Author: MohamedAshry
 *
 *      Description: Simple Calculator using switch Statement
 */


#include <stdio.h>

int main()
{
	// Declaration of variables
	char operator;
	double first, second;

	// Ask user to enter the desired operator
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &operator);
	fflush(stdin); fflush(stdout);

	// Ask user to enter the number required for the operation
	printf("Enter two operands: ");
	scanf("%lf %lf", &first, &second);
	fflush(stdin); fflush(stdout);

	switch (operator)
		{
		case '+':
			printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
			break;

		case '-':
			printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
			break;

		case '*':
			printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
			break;

		case '/':
			printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
			break;

			// operator doesn't match any case constant
		default:
			printf("#Error# operator is not correct");
		}		// end of switch

	return 0;
}		// end of main
