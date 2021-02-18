#include "holberton.h"
/**
 * _strncat - function name
 * @dest: s1 from main
 * @src: s2 from main
 * @n: 1024 from main
 * Return: out is a pointer, return pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *out = dest;
	int i = 0;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while ((*src != '\0') && (n > i))
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
	}
	return (out);

}
