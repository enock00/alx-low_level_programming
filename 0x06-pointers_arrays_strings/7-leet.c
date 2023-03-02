#include "main.h"

/**
 *leet - a function that encodes a string into 1337.
 *@x: Input value
 *Return: return x
 *
 */
char *leet(char *)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; *a != '\0' a++;)
	{
		for (b = 0; b < 10; b++)
		{
			if (*a == s1[b])
			{
				*a = s2[b];
			}
		}
	}
	return (*a);
}
