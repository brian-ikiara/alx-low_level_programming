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
	int i = 0;

	if (s[i] == '\0')
		return (void);

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
