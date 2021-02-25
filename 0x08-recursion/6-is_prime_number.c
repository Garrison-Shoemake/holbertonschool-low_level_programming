#include "holberton.h"
int prime(int j, int i);
/**
 * is_prime_number - main function name
 * @n: variable from main
 * Return: calls helper func for output
 *
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - function name
 * @i: passed int from first func
 * @j: incrementation number
 * Return: return statements for determining
 *
 */
int prime(int j, int i)
{
	if (j < 2)
		return (0);
	if (j % i == 0)
		return (0);
	if (i > (j / 2))
		return (1);
	return (prime(j, (i + 1)));
}
