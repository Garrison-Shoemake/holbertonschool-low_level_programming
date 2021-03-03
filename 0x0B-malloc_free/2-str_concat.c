#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - function name
 * @str: string to count
 * Return: returned string length
 */
int _strlen(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {

        }
        return (i);
}

/**
 * str_concat - function name
 * @s1: first string for problem
 * @s2: second string for problem
 * Return: return value
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *ar;


	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	ar = malloc((_strlen(s1) + _strlen(s2)) * sizeof(char) + 1);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
