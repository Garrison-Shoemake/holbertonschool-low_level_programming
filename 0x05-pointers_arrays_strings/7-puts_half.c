#include "holberton.h"
/**
 * puts_half - function name
 * @str: string variable
 *
 *
 */
void puts_half(char *str)
{
	int n;
	int length;

	n = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (n % 2 == 0)
	{
		for (n = length / 2; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		_putchar(str[n + 1]);
	}
		_putchar('\n');

}
