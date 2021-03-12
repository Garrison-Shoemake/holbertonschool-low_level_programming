#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 */
void printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 */
void printint(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 */
void printflt(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 */
void printstr(va_list list)
{
	if (!list)
	{
		printf("(nil)");
	}
	printf("%s", va_arg(list, char *));
}
/**
 * print_all - funciton name, prints what is passed to it
 * @format: arg types passed. c - char, i - integer, f - float, s - char *
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	unsigned int ii;
	char *sep = "";
	format_t structf[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printflt},
		{"s", printstr},
		{NULL, NULL},
	};

	va_start (list, format);

	while (format && format[i])
	{

		ii = 0;
		while (structf[ii].s)
		{
			if (structf[ii].s[0] == format[i])
			{
				printf("%s", sep);
				structf[ii].f(list);
				sep = ", ";
			}
			ii++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
