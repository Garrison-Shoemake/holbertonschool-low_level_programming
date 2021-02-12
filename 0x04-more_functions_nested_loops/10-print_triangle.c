#include "holberton.h"
/**
 * print_triangle - syntax start
 * @size: determines size of triangle
 *
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size; b > a; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
