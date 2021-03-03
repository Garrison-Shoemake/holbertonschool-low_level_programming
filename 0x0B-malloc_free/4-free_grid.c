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

	for (i = height; i > 0; i--)
		free(grid);

	free(grid);
}
