#include "holberton.h"
/**
 * _strlen - function name
 * @s: determines length
 *
 */
int _strlen(char *s)
{
	while (s != '\0')
		s++;

	return (s);
}
