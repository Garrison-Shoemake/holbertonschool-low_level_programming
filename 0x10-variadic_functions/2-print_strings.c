#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function name, prints strings passed to it
 * @separator: separator to... uhh... separate
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *x;

	va_start(list, n);


	for (i = 0; i < n; i++)
	{
		x = va_arg(list, char *);

		if (x != NULL)
		{
			printf("%s", x);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
}
