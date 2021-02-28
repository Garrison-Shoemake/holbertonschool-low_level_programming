#include <stdio.h>
#include "holberton.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument value
 * Return: return value
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	int count = 0;

	while (count < argc)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
