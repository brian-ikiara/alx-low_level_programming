#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints integers as characters
 * using the putchar function.
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		/* Initializes putchar to the ASCII library */
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
