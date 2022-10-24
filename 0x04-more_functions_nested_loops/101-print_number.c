#include "main.h"

/**
 * print_number - Function prototype
 * @n: Number to be checked
 *
 * Description: Prints an integer using _putchar
 * function only; can't use long!
 * Return: 0, since it's void.
 * On error, stderr.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
