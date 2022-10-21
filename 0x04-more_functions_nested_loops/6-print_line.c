#include "main.h"

/**
 * print_line - Function prototype
 * @n: Number of times to be printed.
 *
 * Description: Prints a '_' according to the value of
 * n. It prints dashes!
 * Return: 0, since it's void.
 * On error, stderr.
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
