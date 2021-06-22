#include "holberton.h"

/**
 * times_table  - Short description, single line
 * Return: No return value
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int num = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			num = i * j;
			_putchar(' ');
			_putchar('0' + num);
			_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
