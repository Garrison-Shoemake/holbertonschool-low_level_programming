#include <stdio.h>
/**
 * main - syntax start
 * Return: return value
 */

int main(void)
{
	int i = '0';
	int x = 'a';

	for ( ; i <= '9'; i++)
	{
		putchar(i);
	}
	for ( ; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
