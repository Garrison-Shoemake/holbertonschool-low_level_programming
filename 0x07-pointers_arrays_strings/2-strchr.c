#include "holberton.h"
/**
 * _strchr - function name
 * @s: string to check
 * @c: what we are checking the string for
 * Return: return value
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] == c)
			return (s + n);
		n++;
	}
	return ('\0');
}
