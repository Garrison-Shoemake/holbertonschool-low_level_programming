#include "holberton.h"
/**
 * _strspn - function name
 * @s: string to check
 * @accept: letters to accept
 * Return: return value
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int m;

	while (s[n] != '\0')
	{
		for (m = 0; accept[m] != s[n]; m++)
		{
			if (accept[m] == '\0')
				return (n);
		}
		n++;
	}
	return (n);
}
