#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - string length function
 * @str: string to check
 * Return: returns value for length
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
		str++;

	return (i);
}


/**
 * argstostr - function name
 * @ac: arguments to pass
 * @av: arguemtns to use
 * Return: return value
 */
char *argstostr(int ac, char **av)
{
	int i, j, z = 0;
	char *x;
	int size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += _strlen(av[i]) + 1;

	x = malloc(size + 1);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			x[z] = av[i][j];
			z++;
		}
		x[z] = '\n';
		z++;
	}
	x[z] = '\0';
	return (x);
}
