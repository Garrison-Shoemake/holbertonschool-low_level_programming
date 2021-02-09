#include "holberton.h"
/**
 * print_sign - function for printing positive or negative sign
 * @n: value to check for positivity
 * Return: return value determines positivity or not
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
