#include "holberton.h"
/**
 * binary_to_uint - function name, converts binary to unsigned int
 * @b: string to convert to binary
 * Return: returns the unsigned int's value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i, j;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	while (i)
	{
		n += (b[i - 1] - '0') << j;
		i--;
		j++;
	}
	return (n);
}
