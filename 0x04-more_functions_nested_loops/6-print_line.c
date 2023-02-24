#include "main.h"
/**
 *print_line - a function that draws a straight line
 *
 *@n:integer parameter
 *Return: always 0
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0 ; x < n ; x++)
			_putchar('_');
	}
	_putchar('\n');
}
