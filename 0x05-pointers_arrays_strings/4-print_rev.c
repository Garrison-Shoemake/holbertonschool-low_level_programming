#include "holberton.h"
/**
 * print_rev - function name
 * @s: variable to test
 *
 */
void print_rev(char *s)
{
        int length = 0;

        while (s[length] != '\0')
        {
		length++;
	}

	length--;

	while (s[length] >= 0)
	{
		_putchar(s[length]);
		length--;
	}

	_putchar('\n');

}
