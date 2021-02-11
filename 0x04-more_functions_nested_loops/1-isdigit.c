#include "holberton.h"
/**
 * _isdigit - function prototype
 * @c: integet to determine digit
 * Return: return value for result
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
