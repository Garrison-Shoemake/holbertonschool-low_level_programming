#include <stdio.h>
/**
 * main - styntax start
 * Return: return value
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	if (ch != 'q' && ch != 'e')
		putchar(ch);
}
	putchar('\n');
	return (0);
}
