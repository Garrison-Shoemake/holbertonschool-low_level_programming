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
	char *ar;

	if (size == 0)
	{
		return ("NULL");
	}

	ar = malloc(size);
	ar[0] = c;

	if ( ar[0] == c)
	{
		return (ar);
	}
	else
	{
		return ("NULL");
	}

}
