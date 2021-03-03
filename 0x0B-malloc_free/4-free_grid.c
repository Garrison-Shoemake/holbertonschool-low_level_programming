#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - function name
 * @grid: grid to free
 * @height: height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
