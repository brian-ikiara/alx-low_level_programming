#include "main.h"

/**
 * _print_rev_recursion - Funcrion prototype
 * @s: String pointer
 *
 * Description: Prints a string in reverse using _putchar & employing
 * recursion.
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
