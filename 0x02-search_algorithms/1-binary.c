#include "search_algos.h"
/**
 * binary_search - function that searches for a value in an array
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for in the array
 * Return: returns index where value is located, otehrwise returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = (high + low) / 2;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	if (value == array[mid])
		return (mid);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		mid = (high + low) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
