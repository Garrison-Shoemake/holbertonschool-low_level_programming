#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - function name
 * @s: passes operand in to check for function to use
 * Return: returns function to use
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;


	i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);

}
