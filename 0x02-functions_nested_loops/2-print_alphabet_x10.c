#include "holberton.h"
/**
 * print_alphabet_x10 - prototype for printing the alphabet 10x
 *
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	for (j = 0; j < 10; j++)
	{
	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	}
}
