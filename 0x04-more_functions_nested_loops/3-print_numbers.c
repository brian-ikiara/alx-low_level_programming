#include "main.h"

/**
 * print_numbers - Function prototype
 *
 * Description: Prints the numbers from 0 to 9
 * using while loop.
 * Return: 0, since it's void return type.
 * On error, stderr.
 */

void print_numbers(void)
{
	char c = 0;

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
