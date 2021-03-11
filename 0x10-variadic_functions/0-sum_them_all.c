#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function name to add all arguments together
 * @n: integers to sum
 * Return: returns the sum of the optional ints passed in
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);

}
