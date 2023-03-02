#include "main.h"

/**
 * string_toupper - uppercase all lower case letters in a string.
 * @s: string to process.
 *
 * Return: a pointer.
 */
char *string_toupper(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;
		x++;
	}
	s[x] = '\0';

	return (s);
}

