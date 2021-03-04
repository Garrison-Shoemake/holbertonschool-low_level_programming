#include "holberton.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
		exit (98);

	return (ptr);
}
