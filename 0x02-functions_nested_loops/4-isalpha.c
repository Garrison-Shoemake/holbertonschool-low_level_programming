#include "holberton.h"
/**
 * _isalpha - function to determine alphabet or not
 * @c: value to check for alpha
 * Return: retun value of 1 if alpha, 0 if not
*/
int _isalpha(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
