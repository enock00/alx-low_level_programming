#include "main.h"
/**
 * _islower -  a function that checks for lowercase character.
 *
 * @c: parameter to print
 *
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
