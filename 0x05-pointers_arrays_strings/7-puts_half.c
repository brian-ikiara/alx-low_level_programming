#include "main.h"

/**
 * _strlen - Function prototype
 * @s: String to be checked
 *
 * Description: Returns the length of a given string.
 * Return: i, the counter.
 * On error, stderr.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

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
	float i = 0;
	float l;

	l = _strlen(str) / 2;

	while (str[i] != '\0')
	{
		while (i >= l)
		{
			_putchar(str[i]);
			i++;
		}
		i++;
	}
	_putchar('\n');
}
