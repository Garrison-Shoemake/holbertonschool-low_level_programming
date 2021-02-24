#include "holberton.h"
/**
 * _puts_recursion - function name
 * @s: string to check
 * Return: return cancels recursion
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
