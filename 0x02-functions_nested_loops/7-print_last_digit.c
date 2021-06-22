#include "holberton.h"

/**
 * print_last_digit  - Short description, single line
 * @n: contians value to be compared
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	if (n <= 0)
	{
		n = (n * -1);
	}
	n = (n % 10);

	_putchar('0' + n);
	return (n);
}
