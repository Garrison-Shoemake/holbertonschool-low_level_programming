#include "holberton.h"
/**
 * rot13 - funciton name
 * @str: string variable
 * Return: return
 *
 *
 */
char *rot13(char *str)
{
	int i = 0;
	int n = 0;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		n = 0;
		while (rot1[n] != '\0')
		{

			if (str[i] == rot1[n])
			{
				str[i] = rot2[n];
				break;
			}
			n++;
		}
		i++;
	}

	return (str);
}
