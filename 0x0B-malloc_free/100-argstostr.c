#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - this function  concatenates all the arguments of your program.
 * @ac: args count.
 * @av: arguments
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int a, b, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (a = 0; a < ac; a++)
	{
		temp = *(av + a);
		for (b = 0; temp[b]; b++)
		{
			length++;
		}
		length += 1;
	}
	str = malloc(sizeof(char) * length + 1);
	length = 0;
	for (a = 0; a < ac; a++)
	{
		temp = *(av + a);
		for (b = 0; temp[b]; ++b)
		{
			str[length] = temp[b];
			length++;
		}
			str[length] = '\n';
			length++;
	}
	str[length] = '\0';
	return (str);
}

