#include "holberton.h"
/**
 * more_numbers - syntax start
 *
 */

void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
	for (x = 0; x <= 14; x++)
	{
		if (x > 9)
		{
		_putchar(x / 10 + '0');
		}
		_putchar(x % 10 + '0');
	}
	_putchar('\n');
	}

}
