#include "main.h"
/**
 *_isalpha -  a function that checks for alphabetic character
 *
 * @c: a parameter to print
 *
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
			return (1);
	else
			return (0);
}
