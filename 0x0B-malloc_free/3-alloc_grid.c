#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of
 * integers.
 * @width: colums.
 * @height: rows.
 *
 * Return: Pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			grid[a][b] = 0;

	return (grid);
}
