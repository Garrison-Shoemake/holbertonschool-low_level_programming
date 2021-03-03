#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - function name
 * @grid: grid to free
 * @height: height of the grid
 *
 */
void free_grid(int **grid, int height __attribute__((unused)))
{
	free(grid);
}
