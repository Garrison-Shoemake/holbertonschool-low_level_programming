#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function name
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: return value
 */
int main(int argc, char *argv[])
{
	int (*fun)(int, int);
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fun = get_op_func(argv[2]);

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun(a, b));
	return (0);

}
