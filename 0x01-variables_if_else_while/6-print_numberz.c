#include <stdio.h>
/**
 * main - Entry Point
 * Description: "prints single digit, followed by a new line"
 * Return: Always 0
 */
int main(void)
{
	int n;

	for ((n = 0); (n <= 10); n++)
	{
		putchar(n % 10);
	}
	{

		putchar('\n');
	}

	return (0);
}
