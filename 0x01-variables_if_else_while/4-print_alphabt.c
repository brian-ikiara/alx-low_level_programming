#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' && c != 'e' && c != 'q'; c++)
	{
		putchar(c);
	}
	return (0);
}
