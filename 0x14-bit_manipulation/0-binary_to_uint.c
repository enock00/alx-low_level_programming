#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;
	int i;

	if ( b == NULL)
	{
		return 0;
	}

	while (b[len] != '\0')
	{
		if  (b[len] != '0' && b[len] != '1')
		{
			return 0;
		}
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			 result += (1 << (len - i - 1));
		}
	}
	return result;
}
