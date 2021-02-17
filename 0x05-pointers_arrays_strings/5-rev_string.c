#include "holberton.h"
/**
 * rev_string - function name
 * @s: variable to use
 *
 */
void rev_string(char *s)
{
	int length = 0;
	int b = 0;
	int temp = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	for (b = 0; b <= length; b++, length--)
	{
		temp = s[b];
		s[b] = s[length];
		s[length] = temp;
	}

}
