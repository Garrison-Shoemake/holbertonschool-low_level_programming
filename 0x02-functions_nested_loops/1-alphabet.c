#include "holberton.h"
/**
 * print_alphabet - will print the alphabet when executed
 *
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)

	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
