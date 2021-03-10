#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - function name
 * @array: array to check
 * @size: size of the array
 * @cmp: pointer to functions to compare
 * Return: returns value based on comparison
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
