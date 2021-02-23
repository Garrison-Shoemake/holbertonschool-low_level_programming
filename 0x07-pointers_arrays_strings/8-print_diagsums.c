#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
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

	for (i = 0, j = 0; i < (size * size) - size + 1; i += (size - 1))
	{
		j += a[i];
	}
	printf("%d, %d\n", k, j);



}
