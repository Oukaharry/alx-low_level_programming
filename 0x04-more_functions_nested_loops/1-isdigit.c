#include "holberton.h"

/**
 * _isdigit - checks for a digit
 *@c  - value of the int to be checked
 * Return: 1 if is a digit, else 0
 */
int _isdigit(int c)
{
	int isdigit = 0;

	if (c >= 48 && c <= 57)
	{
		isdigit = 1;
	}

	return (isdigit);
}
