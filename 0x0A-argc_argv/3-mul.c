#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function name
 * @argc: numer of arguments
 * @argv: arguments passed to main
 * Return: return value
 *
 */
int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", (a * b));
		return (0);
	}
	return (0);
}
