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
	int a;
	int b;

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
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", fun(a, b));
	return (0);

}
