#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - strlen
 * @str: string to count
 * Return: return value
 *
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat - function name
 * @s1: first string to cat
 * @s2: second string to cat
 * @n: number of bytes into s2
 * Return: return value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j;
	unsigned int k;

	if (n >= _strlen(s2))
	{
		ptr = malloc(sizeof(s1) + sizeof(s2));
	}
	else
	{
		while (i < n)
		{
			i++;
		}
		ptr = malloc(sizeof(s1) + i);
	}

	if (ptr == NULL)
		return (NULL);

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (j = 0; s1[j] != '\0'; j++)
	{
		ptr[j] = s1[j];
	}
	for (k = 0; s2[k] != '\0' && k <= n; k++)
	{
		ptr[j] = s2[k];
		j++;
	}

	return (ptr);
}
