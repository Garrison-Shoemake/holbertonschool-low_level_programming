#include <stdio.h>
#include <unistd.h>
/**
 * main - runtime entry point
 * Return: return value 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 64);
	return (1);
}
