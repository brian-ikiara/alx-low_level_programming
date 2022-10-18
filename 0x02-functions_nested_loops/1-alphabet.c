#include "main.h"

/**
 * main - Program entry point
 *
 * Description: Prints the alphabet in lowercase
 * Return: 0.
 * On error, stderr.
 */

void print_alphabet(void)
{
	char c = 'a';

	do {
		_putchar(c);
		c++;
	} while (c <= 'z');
	_putchar('\n');
}
