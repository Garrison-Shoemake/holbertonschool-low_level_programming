#include "holberton.h"
char *_strchr(char *s, char c);
/**
 * _strchr - function name
 * @s: string to check
 * @c: what we are checking the string for
 * Return: return value
 */

char *_strpbrk(char *s, char *accept)
{

	if ((s == '\0') || (accept == '\0'))
		return ('\0');

	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);

		else
			s++;
	}
	return ('\0');
}

/**
 * _strchr - function name
 * @s: string to check
 * @c: what we are checking the string for
 * Return: return value
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] >= '\0')
	{
		if (s[n] == c)
			return (s + n);
		n++;
	}
	return ('\0');
}
