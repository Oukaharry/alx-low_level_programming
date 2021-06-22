#include "holberton.h"

/**
 * _islower  - check the code for ALX School students.
 * int c - passed from main function
 *
 * Return: Always 0.
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
