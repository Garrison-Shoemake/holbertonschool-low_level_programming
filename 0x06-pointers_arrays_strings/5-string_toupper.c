#include "holberton.h"
/**
 * string_topper - function name
 * Return: return value of function
 *
 *
 */
char *string_toupper(char *str)
{
	int n;

	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
		}
		n++;
	}
	return (str);
}
