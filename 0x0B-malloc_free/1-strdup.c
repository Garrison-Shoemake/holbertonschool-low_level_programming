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
	return (i + 1);
}
/**
 * _strdup - function name
 * @str: string to use
 * Return: return value
 */
char *_strdup(char *str)
{
	int i = _strlen(str);
	char *ar;
	int j;


	if (str == NULL)
	{
		return (NULL);
	}

	ar = malloc(i * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		ar[j] = str[j];
	}
	ar[j] = '\0';
	return (ar);

}
