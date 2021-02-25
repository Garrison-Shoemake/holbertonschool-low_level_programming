#include "holberton.h"
int palin(char *s);
int check(char *s, int i, int j);
/**
 * is_palindrome - function name
 * @s: string from main to check
 * Return: calls check to find palindrome
 */
int is_palindrome(char *s)
{
	int x = palin(s) - 1;

	if (*s == '\0')
		return (1);

	return (check(s, 0, x));

}

/**
 * palin - function name
 * @s: string to check
 * Return: returns itself to find string length
 *
 */
int palin(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + palin(s + 1));
}
/**
 * check - function to check for palindrome
 * @s: string to check
 * @i: incrementing i
 * @j: comparison variable for i
 * Return: returns itself until either palindrome or not
 */

int check(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);

	if (j == 0)
		return (1);

return (check(s, i + 1, j - 1));

}
