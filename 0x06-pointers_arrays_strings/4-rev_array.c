#include "holberton.h"
/**
 * reverse_array - function name
 * @a: first pointer a
 * @n: second pointer n
 *
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int temp = 0;
	int i = 0;

	for (b = 0, i = (n - 1); b <= i; b++, i--)
	{
		temp = a[b];
		a[b] = a[i];
		a[i] = temp;
	}

}
