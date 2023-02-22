#include "main.h"
/**
 *_abs - a function that computes the absolute value of an integer
 *
 *@x: a parameter
 *Return: always x
 */
int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
