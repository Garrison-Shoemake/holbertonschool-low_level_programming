#include "holberton.h"
/**
 * print_last_digit - prototype name
 * @r: return value for last number
 * Return: return value
 */
int print_last_digit(int r)
{
	r = (r % 10);
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar('0' + r);
	return (r);
}
