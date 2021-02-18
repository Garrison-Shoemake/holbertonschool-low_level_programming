#include "holberton.h"

/**
 * string_toupper - function name
 * @str: string pointer
 * Return: return value of function
 */
char *string_toupper(char *str)
{
	int n = 0;

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
