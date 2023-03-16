#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Function create and array of integers.
 * @min: starting number.
 * @max: ending number.
 *
 * Return: pointer to the area in memory.
 */
int *array_range(int min, int max)
{
	int *i;
	int j;

	if (min > max)
		return (NULL);
	j = max - min;

	i = malloc(sizeof(int) * (j + 1));
	if (!i)
		return (NULL);
	while (max > min)
	{
		i[j] = max;
		j--;
		max--;
	}
        i[j] = min;
	return (i);
}

