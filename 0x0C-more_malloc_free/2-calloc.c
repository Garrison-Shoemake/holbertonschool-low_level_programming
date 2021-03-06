#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function name. calls for an array of num elements of size bytes
 * @nmemb: number of elements for calloc
 * @size: size of elements in array
 * Return: returns pointer to location in heap
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int j = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ptr[i] = '\0';

	return (ptr);
}
