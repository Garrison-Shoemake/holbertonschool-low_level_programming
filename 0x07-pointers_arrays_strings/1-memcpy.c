#include "holberton.h"
/**
 * _memcpy - function name
 * @dest: destination to copy
 * @src: source to copy from
 * @n: number of times to copy
 * Return: returns destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
