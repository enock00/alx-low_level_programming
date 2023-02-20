#include <stdio.h>
/**
 * main - Entry point
 * Description:  program that prints all possible
 *  combinations of two two-digit numbers.
 *  Return: Always 0
 */
int main(void)
{
	int dg1, dg2;

	for (dg1 = 0; dg1 <= 98; dg1++)
	{
		for (dg2 = dg1 + 1; dg2 <= 99; dg2++)
		{
			putchar((dg1 / 10) + '0');
			putchar((dg1 % 10) + '0');
			putchar(' ');
			putchar((dg2 / 10) + '0');
			putchar((dg2 % 10) + '0');

			if (dg1 == 98 && dg2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
