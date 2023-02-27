#include "main.h"
/**
 *_strlen - a function that returns the length of a string
 *@s: length of a string
 *Return: length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

