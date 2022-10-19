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
	int i = 0;

	/* Prints the newlines */
	while (i <= 9)
	{
		char c = 'a';
		/* Prints the alphabet on the newline created */
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
