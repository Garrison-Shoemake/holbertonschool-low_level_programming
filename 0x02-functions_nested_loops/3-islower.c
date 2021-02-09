#include "holberton.h"
/**
 * _islower - will retun values based on case of return value
 *
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
