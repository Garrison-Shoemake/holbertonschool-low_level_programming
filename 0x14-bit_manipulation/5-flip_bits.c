#include "holberton.h"
/**
 * helper - helps!
 * @n: returned from main function
 * Return: returns count to main
 */
unsigned int helper(unsigned int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
/**
 * flip_bits - function name, flips bits
 * @n: integer to check to flip
 * @m: second number to switch to
 * Return: returns the number og bits needed to complete change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (helper(n ^ m));
}
