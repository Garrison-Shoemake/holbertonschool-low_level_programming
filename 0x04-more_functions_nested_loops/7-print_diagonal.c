#include "holberton.h"
/**
 * print_diagonal - start of funtion
 * @n: integer to test with
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (n > i)
				_putchar('\n');
		}

	}
	_putchar('\n');
}
