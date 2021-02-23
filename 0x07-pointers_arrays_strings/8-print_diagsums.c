#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - function name
 * @a: table to check
 * @size: size of table for algorithm
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k;

	for (i = 0, k = 0; i < (size * size); i += (1 + size))
	{
		k += a[i];
	}

	for (i = (size - 1), j = 0; i < (size * size) - size + 1; i += (size - 1))
	{
		j += a[i];
	}
	printf("%d, %d\n", k, j);



}
