#include "holberton.h"
/**
 * clear_bit - function name, clears a specific index in binary
 * @n: number to replace a bit in
 * @index: index to clear
 * Return: returns 1 if it worked or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
