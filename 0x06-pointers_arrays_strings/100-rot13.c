#include "holberton.h"

/**
 * rot13 - Entry Point - Translates characters to ROT13 Format
 * @string: Pointer to string to be formatted
 * Return: Returns an encoded string
 */

char *rot13(char *string)
{
	int a;
	int b;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; input[b] != '\0'; b++)
		{
			if (string[a] == input[b])
			{
				string[a] = output[b];
				break;
			}
		}
	}
	return (string);
}
