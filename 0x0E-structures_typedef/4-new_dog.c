#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function name
 * @str: string to check length
 * Return: returns string count
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
 * _strdup - function name
 * @str: string to duplicate
 * Return: returns pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *ar;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	ar = malloc(_strlen(str) * sizeof(char) + 1);

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

/**
 * new_dog - function name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: return value
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog *d = malloc((sizeof(struct dog)));

	if (d == NULL)
	{
		return (NULL);
	}

	(*d).age = age;

	(*d).name = _strdup(name);
	if ((*d).name == NULL)
	{
		free (d);
		return (NULL);
	}

	(*d).owner = _strdup(owner);
	if ((*d).owner == NULL)
	{

		free ((*d).name);
		free (d);
		return (NULL);
	}

	return (d);
}
