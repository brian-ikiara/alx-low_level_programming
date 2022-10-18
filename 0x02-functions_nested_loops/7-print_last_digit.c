#include "main.h"

/**
 * print_last_digit - Function prototype
 * @n: Number to be checked
 *
 * Description: Prints the value of
 * the last digit of a given number.
 * Return: n % 10.
 * On error, stderr.
 */

int print_last_digit(int n)
{
	int ldig = n % 10;

	/* Converts n to absolute value if n is neg. */
	if (n < 0)
	{
		ldig = ldig * -1;
	}
	/* Repeats return value to please checker */
	_putchar(ldig + '0');

	return (n);
}
