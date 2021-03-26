#include "holberton.h"
/**
 * set_bit - function name, sets a bit to 1 at a given index
 * @n: number to set a bit within
 * @index: position ot switch binary position at
 * Return: returns 1 if it worked, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);

		return (1);
}
