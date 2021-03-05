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

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
