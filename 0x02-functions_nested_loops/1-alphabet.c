#include "main.h"

/**
 * print_alphabet - Contained in main.h
 *
 * Description: Prints the alphabet in lowercase
 * Return: 0, since it's what the void data
 * type automatically returns.
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
