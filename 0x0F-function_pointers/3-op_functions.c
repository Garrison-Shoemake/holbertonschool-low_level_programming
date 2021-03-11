#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function to add
 * @a: first int to add
 * @b: second int to add
 * Return: returns value to main
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to subtract
 * @a: first int to sub
 * @b: second int to sub
 * Return: returns value to main
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to multiply
 * @a: first int to mul
 * @b: second int to mul
 * Return: return value to main
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function to divide
 * @a: first integer to div
 * @b: second int to div
 * Return: return value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function to mod
 * @a: first int to mod
 * @b: second int to mod
 * Return: return value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);

}
