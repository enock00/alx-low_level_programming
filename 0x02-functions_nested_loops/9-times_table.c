#include "main.h"
#include <stdio.h>
/**
 *times_table - function that prints the 9 times table
 *Return: always 0
 */
void times_table(void)
{
	int i, j, x, mult, k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0, x = 1 ; j <= 9 ; j++, x++)
		{
			mult = i * j;
			k = i * x;
			if (k > 9 && j != 9)
				printf("%d, ", mult);
			else if (j == 9)
				printf("%d", mult);
			else
				printf("%d,  ", mult);
		}
		printf("\n");
	}
}
