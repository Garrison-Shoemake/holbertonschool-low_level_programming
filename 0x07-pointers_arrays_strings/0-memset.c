#include "holberton.h"
/**
 * _memset - function name
 * @s: pointer to block of memory to fill
 * @b: what to fill with
 * @n: how many to fill
 * Return: return value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		s[k] = b;
		k++;
	}
	return(s);
}
