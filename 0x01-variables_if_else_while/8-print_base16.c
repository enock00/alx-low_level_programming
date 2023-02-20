#include  <stdio.h>
/**
 * main - Entry point
 * Description: "print all the numbers of base 16 in lowercase"
 * Return: Always 0
 */
int main(void)
{

	int n;
	char lc;

	for ((n = 0); (n < 10); n++)
	putchar((n % 10) + '0');

	for ((lc = 'a'); (lc <= 'f'); lc++)
	putchar(lc);

	putchar('\n');

	return (0);
}

