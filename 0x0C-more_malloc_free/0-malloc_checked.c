#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function name
 * @b: int to malloc
 * Return: returns pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
