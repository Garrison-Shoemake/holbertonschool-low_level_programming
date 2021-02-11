#include "holberton.h"
/**
 * print_numbers - prototype name
 * Return: return value
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
