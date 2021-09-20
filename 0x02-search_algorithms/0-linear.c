#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: array to search
 * @size: size of the array
 * @value: the value in the array to find
 * Return: returns the index at found value, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
