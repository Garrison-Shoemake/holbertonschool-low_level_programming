#include "holberton.h"

/**
 * cap_string - function name
 * @str: character string
 * Return: return value
 *
 *
 */
char *cap_string(char *str)
{
	int n = 0;
	int m = 0;
	char sep[] = {9, ' ', 10, ',', ';', '.', '!', '?', '"', '(', '{', '}', ')'};

	while (str[n] != '\0')
	{
		for (m = 0; m <= 12; m++)
		{
			if (str[n] == sep[m])
			{
				if (str[n + 1] >= 'a' && str[n + 1] <= 'z')
				{
					str[n + 1] = str[n + 1] - 32;
				}
			}
		}
		n++;
	}
	return (str);
}
