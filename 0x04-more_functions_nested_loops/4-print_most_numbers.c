#include "holberton.h"

/**
 *print_most_numbers - print from 1 to 9, skipping 2 and 4
 *
 */


void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}

		i++;
	}
	_putchar('\n');
}
