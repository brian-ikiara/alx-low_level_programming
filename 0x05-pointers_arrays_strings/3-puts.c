#include "main.h"

/**
 * _puts - Function prototype
 * @str: String to be printed
 *
 * Description: Prints a string to stdout
 * Return: void.
 * On error, stderr.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
