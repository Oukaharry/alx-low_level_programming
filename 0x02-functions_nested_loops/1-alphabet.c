#include "holberton.h"

int print_alphabet(void);
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints alphabet -- Lower case.
 *
 * Return; Always 0.
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
