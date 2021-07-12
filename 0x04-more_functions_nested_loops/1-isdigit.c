#include "holberton.h"

/**
 *_isdigit - function that checks for a digit
 *Return: 1 on true
 *@c: parameter
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
