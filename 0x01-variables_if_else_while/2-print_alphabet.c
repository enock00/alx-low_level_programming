#include <stdio.h>
/**
 * main - Entry point
 * Description: "a program that prints the alphabet in lowercase"
 * Return: always 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
