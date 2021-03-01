#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function name
 * @argc: argument count
 * @argv: arguments passed
 * Return: return value
 *
 */
int main(int argc, char **argv)
{
	int i;
	int x;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}


	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (0 == atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				x = atoi(argv[i]);
				sum += x;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
