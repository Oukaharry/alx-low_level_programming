#include "holberton.h"

/**
 * print_sign  - prints the sign of a number
 * @n: contians value to be compared
 * Return: Varies depending with c
 */

int print_sign(int n)
{
	int print_sign = -1;

	if (n > 0)
	{
		print_sign = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		print_sign = 0;
		_putchar('0');
	}

	else
	{
		_putchar('-');
	}

	return (print_sign);
}
