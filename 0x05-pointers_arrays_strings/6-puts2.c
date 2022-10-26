#include "main.h"

/**
 * puts2 - Function prototype
 * @s: String to be checked
 *
 * Description: Prints the digits on even number indices.
 * Return: 0, since it's void.
 * On error, stderr.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] == '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
