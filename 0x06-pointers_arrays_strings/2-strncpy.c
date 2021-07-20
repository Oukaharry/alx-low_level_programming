#include "holberton.h"

/**
 * _strncpy - concatenates two string
 * @dest: Destination pointer
 * @src: Source pointer string
 * @n: string size
 * Return: Returns a concatenated string
 *
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
