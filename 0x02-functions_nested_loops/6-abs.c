#include "holberton.h"
/**
 * _abs - function name
 * @r: return value determines abs
 * Return: return value of statement
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	return (r);
}
