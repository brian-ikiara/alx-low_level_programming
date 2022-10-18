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
	/* Checks if it exists in the lowercase alphabet set */
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
		/* No need for braces as it will return end of program */
		return (0);
}
