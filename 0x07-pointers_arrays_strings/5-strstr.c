#include "holberton.h"
/**
 * _strstr - function name
 * @haystack: haystack we're looking in
 * @needle: needle we're finding
 * Return: return value
 */
char *_strstr(char *haystack, char *needle)
{
	int n = 0;
	int m = 0;

	while (haystack[n] != '\0')
	{
		if  (haystack[n] == needle[m])
		{
			m++;
			n++;
		}
		return (needle);
	}
	return ('\0');
}
