#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Using the main funnction
 * this program prints the alphabet in lowercase
 * Return: Always 0.
 */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	putchar(ltr);

	putchar('\n');

	return (0);
}
