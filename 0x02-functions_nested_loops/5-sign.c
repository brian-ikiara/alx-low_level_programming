#include "main.h"

/**
 * print_sign - Function prototype
 * @n: Number to be checked
 *
 * Description: Checks whether number is either
 * positive or negative.
 * Return: 1 and + if positive, -1 and - if
 * negative; 0 otherwise.
 * On error, stderr.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
		return (0);
}
