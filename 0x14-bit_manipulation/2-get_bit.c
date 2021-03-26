#include "holberton.h"
/**
 * get_bit - function name, gets bit at a certain point
 * @n: int to return value of
 * @index: index to retieve from
 * Return: returns value at index value of n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
