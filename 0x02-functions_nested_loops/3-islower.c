#include "holberton.h"

/**
 * _islower  - check the code for ALX School students.
 * int c - passed
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	int islower = -1;
	char ch  = c;

	if (ch >= 'A' &&  ch <= 'Z')
	{
		islower = 0;
	}

	else if (ch >= 'a' && ch <= 'z')
	{
		islower = 1;
	}

	return (islower);
}
