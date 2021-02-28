#include "holberton.h"
#include <stdio.h>
/**
 * main - main function name
 * @argc: number of arguments
 * @argv: arguments to main
 * Return: return value
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	int count = 0;


	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
		return (0);
}
