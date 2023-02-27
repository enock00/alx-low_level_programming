#include "main.h"
#include <stdio.h>
/**
 *puts_half - a function that prints half of a string
 *followed by a new line
 *@str: a string
 *Return: 0
 */
void puts_half(char *str)
{
	int y = 0;


	while (*str != '\0')
	{
		y++;
		str++;
	}

	str -= (y / 2);
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
