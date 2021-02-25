#include "holberton.h"
int finder(int n, int i);
/**
 * _sqrt_recursion - main function name
 * @n: integer from main.c
 * Return: return calls helper function for output
 *
 */
int _sqrt_recursion(int n)
{
	return (finder(n, 0));
}
/**
 * finder - function name
 * @n: first integer from main function
 * @i: incrementing integer
 * Return: returns input to main func for output
 */


int finder(int n, int i)
{
	int sqr = i * i;

	if (sqr == n)
		return (i);
	if (sqr > n)
		return (-1);

	return (finder(n, i + 1));
}
