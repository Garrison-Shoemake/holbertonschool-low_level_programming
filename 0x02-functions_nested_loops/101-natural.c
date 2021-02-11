#include "holberton.h"
#include <stdio.h>

/**
 * main - syntax start
 * @a: integer for 3 part of problem
 * @b: integer for 5 part of problem
 * @sum: sum of 3 into 1024
 * @sum2: sum of 5 into 1024
 * Return: return value
 *
 */

int main(void)
{
	int a;
	int b;
	int sum = 0;
	int sum2= 0;

	for (a = 3; a <= 1024; a += 3)
		sum += a;

	for (b = 5; b <=1024; b += 5)
		sum2 += b;

	printf("%d\n", sum + sum2);
	return (0);
}
