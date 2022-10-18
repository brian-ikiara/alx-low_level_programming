#include "main.h"

/**
 * _islower - Function prototype
 * @c: Character to be checked
 *
 * Description: Checks if character is lowercase
 * Return: Either 1 for lowercase or 0 otherwise
 * On error, stderr..
 */

int _islower(int c)
{
	if ((c + '0') >= 'a' && (c + '0') <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
