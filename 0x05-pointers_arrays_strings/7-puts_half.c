#include "main.h"

/**
 * _strlen - Function prototype
 * @s: String to be checked
 *
 * Description: Returns the length of a given string.
 * Return: i, the counter.
 * On error, stderr.
 */

int _strlen(char *s);

/**
 * puts_half - Function prototype
 * @str: String to be checked
 *
 * Description: Returns the last half of a
 * given string.
 * Return: 0, since it's void.
 * On error, stderr.
 */

void puts_half(char *str)
{
	int l, i = 0;

	l = _strlen(str);

	while (str[i] != '\0')
	{
		for (i; i <= (l / 2); i++)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
