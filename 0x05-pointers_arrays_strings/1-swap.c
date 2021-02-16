#include "holberton.h"
/**
 * swap_int - function name
 * @a: first int
 * @b: second int
 * Return: return value
 */
void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
