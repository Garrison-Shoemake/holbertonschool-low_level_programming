#include "holberton.h"
/**
 * _strcat - function name
 * @dest: destination pointer
 * @src: source pointer
 *
 */
char *_strcat(char *dest, char *src)
{
	char* out = dest;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
		}
	}
	return (out);
}
