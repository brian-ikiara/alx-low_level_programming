#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	c = 'a';
	while ((c != 'q' || c != 'e') && c <= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
