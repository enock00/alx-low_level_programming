#include "main.h"

/**
 *leet - a function that encodes a string into 1337.
 *@x: Input value
 *Return: return x
 *
 */
char *leet(char *x)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (x[a] == s1[b])
			{
				x[a] = s2[b];
			}
		}
	}
	return (x);
}
