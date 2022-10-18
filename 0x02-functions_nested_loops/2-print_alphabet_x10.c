#include "main.h"

/**
 * print_alphabet_x10 - Outsourced function
 *
 * Description: Prints lowercase alphabet on
 * 10 lines.
 * Return: 0, since it's what the void data type
 * returns.
 * On error, stderr.
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	/* Prints the newlines */
	for (i; i <= 9; i++)
	{
		/* Prints the alphabet on the newline created */
		for (c; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
