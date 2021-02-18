#include "holberton.h"
int _strlen(char *s);
/**
 * _strcpy - function name
 * @dest: points tp destination
 * @src: points to source
 * Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}
/**
* _strlen - calling strlen function for length
* @s: malleable int
* Return: returns c for strlen
*/
	int _strlen(char *s)
	{
		int c = 0;

		while (s[c] != '\0')
			c++;
		return (c);
	}
