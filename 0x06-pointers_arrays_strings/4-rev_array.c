#include "holberton.h"
/**
 *reverse_array - reverses an array
 *@a: pointer to array
 *@n: array size
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int index;
	int temp;

	for (index = 0; index < n / 2; index++)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}
}
