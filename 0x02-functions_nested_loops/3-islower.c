#include "holberton.h"

/**
 * _islower  - Short description, single line
 * @c: contians value to be compared
 * Return: Always returns zero
 */

int _islower(int c)
{
	int islower = 0;
	char ch  = c;

	if (ch >= 'a' && ch <= 'z')
	{
		islower = 1;
	}

	return (islower);
}
