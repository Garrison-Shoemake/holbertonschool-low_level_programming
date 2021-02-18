#include "holberton.h"
/**
 * _strcmp - function name
 * @s1: first pointer
 * @s2: second pointer
 * Return: return value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (s1 != s2)
			break;
		else
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}
