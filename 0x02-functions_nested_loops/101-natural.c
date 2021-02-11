#include "holberton.h"
#include <stdio.h>

/**
 * main - syntax start
 * Return: return value
 */

int main(void)
{
	int a;
	int b;
	int sum = 0;
	int sum2 = 0;

	for (a = 3; a < 1024; a += 3)
		sum += a;

	for (b = 5; b < 1024; b += 5)
		sum2 += b;

	printf("%d", (sum + sum2));
	printf("\n");
}
