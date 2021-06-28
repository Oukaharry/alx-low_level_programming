#include "holberton.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	if (c >= b)
	{
		if (c >= a)
		{
			return (c);
		}
		else
		{
			return (a);
		}
	}
	else
	{
		if (b >= a)
		{
			return (b);
		}
		else
		{
			return (a);
		}
	}
}
