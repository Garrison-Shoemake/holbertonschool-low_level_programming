#include "holberton.h"
/**
 * _strlen - function name
 * @s: determines length
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
