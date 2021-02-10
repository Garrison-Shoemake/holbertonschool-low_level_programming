#include "holberton.h"
/**
 * jack_bauer - function name
 * Return: void
 */
void jack_bauer(void)
{

	int hour;
	int min;

	hour = 00;
	while (hour <= 23)
	{
		min = 00;
		while (min <= 59)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
