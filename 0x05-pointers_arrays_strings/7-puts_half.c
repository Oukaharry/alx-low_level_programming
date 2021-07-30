#include "holberton.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len, n;

	len = 0, n = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = (len / 2);
	}

	else
	{
		n = (len - 1) / 2;
	}

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;

		if (len >= n)
		{
			_putchar(*(str + len));
		}
	}

	_putchar('\n');
}
