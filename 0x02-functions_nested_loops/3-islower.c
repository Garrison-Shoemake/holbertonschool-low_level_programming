#include "holberton.h"
/**
 * _islower - will retun values based on case of return value
 * @c: determines retrun value
 * Return: will return 1 if lower case and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
