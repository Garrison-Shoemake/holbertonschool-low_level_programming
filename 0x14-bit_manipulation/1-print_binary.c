#include "holberton.h"
/**
 * print_binary - funtion name, prints binary numbers
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
