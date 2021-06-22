#include "holberton.h"

/**
 * _isalpha  - Short description, single line
 * @c: contians value to be compared
 * Return: Always returns zero
 */

int _isalpha(int c)
{
	int isalpha = 0;
	char comp = c;

	if ((comp >= 'A' && comp <= 'Z') || (comp >= 'a' && comp <= 'z'))
	{
		isalpha = 1;
	}
	return (isalpha);
}
