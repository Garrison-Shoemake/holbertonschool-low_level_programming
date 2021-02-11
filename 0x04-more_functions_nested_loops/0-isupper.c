#include "holberton.h"

/**
 * _isupper - syntax start
 * @c: value to check casing
 * Return: return value
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
