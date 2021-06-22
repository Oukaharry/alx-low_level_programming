#include "holberton.h"

/**
 * print_alphabet - prints alphabet -- Lower case.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char Alphs;

	for (Alphs = 'a'; Alphs <= 'z'; Alphs++)
	{
		_putchar(Alphs);
	}

	_putchar('\n');
	return (0);
}
