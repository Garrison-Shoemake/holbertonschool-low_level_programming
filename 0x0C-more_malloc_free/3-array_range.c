#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function name, contains values from min to max
 * @min: start of array
 * @max: end of array
 * Return: return value
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min) * sizeof(int) + (1 * sizeof(int)));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}

	return (ptr);
}
