#include "holberton.h"
char *_strchr(char *s, char c);
/**
 * _strpbrk - function name
 * @s: string to check
 * @accept: what we are checking the string for
 * Return: return value
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	if ((s == '\0') || (accept == '\0'))
		return ('\0');

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
