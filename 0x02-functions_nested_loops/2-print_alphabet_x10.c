#include "holberton.h"
/**
 * print_alphabet_x10  -  prints 10 times the alphabety, then new line..
 *
 * Return: Always 0.
 */

int print_alphabet_x10(void)
{
	int count = 0;
	char Alphs;

	while (count < 10)
	{
		for (Alphs = 'a'; Alphs <= 'z'; Alphs++)
		{
			_putchar(Alphs);
		}

		_putchar('\n');

		count++;
	}

	return (0);
}
