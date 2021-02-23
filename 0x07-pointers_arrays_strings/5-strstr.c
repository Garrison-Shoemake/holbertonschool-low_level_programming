#include "holberton.h"
/**
 * _strstr - function name
 * @haystack: haystack we're looking in
 * @needle: needle we're finding
 * Return: return value
 */
char *_strstr(char *haystack, char *needle)
{
	int n;

	for (n = 0; haystack[n]; n++)
	{
		if (haystack[n] == *needle)
		{
			return (needle);
		}
	}
	return ('\0');
}
