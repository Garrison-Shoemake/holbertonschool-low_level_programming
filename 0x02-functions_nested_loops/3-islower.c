#include "holberton.h"
/**
 * _islower - will retun values based on case of return value
 * Return: will return 1 if lower case and 0 if otherwise
 * int c - determines retrun value
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
