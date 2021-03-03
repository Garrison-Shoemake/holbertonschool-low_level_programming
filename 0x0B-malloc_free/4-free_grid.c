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
        int **grid;
        int i;
        int j;
        int k;

        if (width <= 0)
        {
                return (NULL);
        }
        if (height <= 0)
        {
                return (NULL);
        }

        grid = malloc(height * sizeof(int *));

        if (grid == NULL)
        {
                return (NULL);
        }


        for (i = 0; i < height; i++)
        {
                grid[i] = malloc(width * sizeof(int));

                if (grid[i] == NULL)
                {
                        return (NULL);
                }
        }

        for (j = 0; j < height ; j++)
        {
                for (k = 0; k < width  ; k++)
                {
                        grid[j][k] = 0;
                }
        }
        return (grid);
}
/**
 * free_grid - function name
 * @grid: grid to free
 * @height: height of the grid
 *
 */
void free_grid(int **grid, int height __attribute__((unused)))
{
	free(grid);
	return;
}
