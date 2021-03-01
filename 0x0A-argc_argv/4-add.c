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

			if (atoi(argv[i]) >= '0' && atoi(argv[i]) <= '9')
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
