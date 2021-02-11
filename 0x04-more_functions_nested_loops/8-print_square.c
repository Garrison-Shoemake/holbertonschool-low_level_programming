#include "holberton.h"
/**
 * print_square - start of function
 * @size: integer to determine size
 *
 */
void print_square(int size)
{

	int a;
	int b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
	else
	_putchar('\n');
}
