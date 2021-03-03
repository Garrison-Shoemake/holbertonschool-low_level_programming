#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function name
 * @size: size of memory to allocate
 * @c: character to
 * Return: return value
 */
char *create_array(unsigned int size, char c)
{
	char *ar = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
