#include "main.h"
#include <stdio.h>
/**
 *puts2 - a function that prints every other character of a string
 *starting with the first character, followed by a new line
 *@str: a string
 *Return: 0
 */
void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
	if ((a % 2) == 0)
	putchar(str[a]);
	else
	continue;
	}
putchar('\n');
}
