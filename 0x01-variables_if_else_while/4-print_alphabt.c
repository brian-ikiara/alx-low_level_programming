#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' || c != 'q')
		{
			putchar(c);
		}
		else
		{
			putchar();
		}
	}
	return (0);
}
