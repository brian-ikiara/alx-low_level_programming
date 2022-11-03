#include "main.h"

/**
 * _puts_recursion - Function prototype
 * @s: String pointer
 *
 * Description: Prints a string using _putchar, followed by a new
 * line, by employing recursion.
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
}
