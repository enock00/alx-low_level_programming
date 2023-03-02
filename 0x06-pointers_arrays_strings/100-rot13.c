#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to encode
 *
 * Return: a pointer to sear
 */
char *rot13(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		while (((s[a] >= 'a' && s[a] <= 'm') || (s[a] >= 'A' && s[a] <= 'M')))
		{
			s[a] += 13;
			a++;
		}
		if ((s[a] >=  'n' && s[a] <= 'z') || (s[a] >=  'N' && s[a] <= 'Z'))
			s[a] -= 13;
		a++;
	}
	return (s);
}
