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
	unsigned int j;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= _strlen(s2))
	{
		ptr = malloc((_strlen(s1) + _strlen(s2)) + 1);
	}
	else
	{
		ptr = malloc((_strlen(s1) + n) + 1);
	}

	if (ptr == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		ptr[j] = s1[j];

	for (k = 0; s2[k] != '\0' && k < n; k++)
	{
		ptr[j] = s2[k];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
