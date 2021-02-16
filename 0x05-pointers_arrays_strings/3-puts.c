#include "holberton.h"
/**
 * _puts - name of function
 * @str: variable to print
 *
 *
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
