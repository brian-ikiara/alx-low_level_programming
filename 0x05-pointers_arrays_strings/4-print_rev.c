#include "main.h"

/**
 * print_rev - Function prototype
 * @s: String to be reversed
 *
 * Description: Reverses a given string to
 * stdout.
 * Return: void.
 * On error, stderr.
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	
	_putchar('\n');
}
