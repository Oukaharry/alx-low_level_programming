#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Checks if number is positive or negative
 *
 * iparameter: passed from the main program
 * Return: Always 0 (success)
 */
int positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	if (i < 0)
	{
		printf("%d is negative\n", i);
	}

	else
	{
		printf("%d is zero\n", i);
	}

	return (0);
}
