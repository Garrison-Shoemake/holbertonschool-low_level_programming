#include "holberton.h"
/**
 * leet - function name
 * @str: string variable
 * Return: returns
 *
 */
char *leet(char *str)
{
	int i = 0;
	int n = 0;
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[] = {'4', '4', '3', '3','0', '0','7', '7','1', '1'};

	while (str[i] != '\0')
	{
		for (n = 0; n <= 9 ; n++)
		{
			if (str[i] == let[n] && let[n] != num[n])
			{
				str[i] = num[n];
			}
		}
		i++;
	}
	return (str);
}
