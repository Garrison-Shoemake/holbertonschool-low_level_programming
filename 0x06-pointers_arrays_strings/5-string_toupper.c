#include "holberton.h"
/**
 * string_toupper - function name
 * Return: return value of function
 * @str: string pointer
 *
 */
char *string_toupper(char *str)
{
	int n;

	while (str[n] != '\0')
	{
		if (n[str] >= 'a' && n[str] <= 'z')
		{
			n[str] = n[str] - 32;
		}
		n++;
	}
	return (str);
}
