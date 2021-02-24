#include "holberton.h"
/**
 * factorial - function name
 * @n: integer to check
 * Return: return value based on factorial
 *
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
