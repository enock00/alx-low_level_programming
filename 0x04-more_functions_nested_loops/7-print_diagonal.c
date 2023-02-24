#include "main.h"
/**
 *print_diagonal - function that draws a diagonal line
 *@n: integer parameter
 *Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');


		_putchar('\\');
		_putchar('\n');
	}
}