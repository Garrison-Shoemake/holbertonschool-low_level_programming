#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - syntax start
 * Return: return value
 */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %i and is greater than 5", n, i);
	} else if (n < 6)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0", n, i);
	} else
	{
		printf("Last digit of %d is %i and is 0", n, i);
	}

	return (0);
}
