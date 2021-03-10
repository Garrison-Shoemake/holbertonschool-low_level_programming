#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - function name
 * @array: array to iterate through
 * @size: size of the array
 * @action: function to call
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL || action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}

}
