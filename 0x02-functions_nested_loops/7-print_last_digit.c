#include "main.h"
/**
 *print_last_digit - function that prints the last digit of a number
 *
 *@a: function parameter
 *Return: always x
 */
int print_last_digit(int a)
{
	int x;

	x = a % 10;
	if (a < 0)
		x = -x;
	else if (a >= 0)
		x = x;
	return (x);
}

