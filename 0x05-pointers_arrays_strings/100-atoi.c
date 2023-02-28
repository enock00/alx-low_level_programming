#include "main.h"

/**
 *_atoi -  a function that convert a string to an integer
 *@s: The pointer to convert
 *
 *Return: an integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int a = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');

		else if (a > 0)
			break;

	} while (*s++);

	return (a * sign);
}
