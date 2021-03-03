#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function name
 * @width: width of the array
 * @height: heigh of the array
 * Return: return value
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}
	}
	for (j = 0; j < height ; j++)
	{
		for (k = 0; k < width  ; k++)
			grid[j][k] = 0;
	}
	return (grid);
}
