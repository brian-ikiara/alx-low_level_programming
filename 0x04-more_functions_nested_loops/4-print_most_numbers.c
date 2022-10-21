#include "main.h"

/**
 * print_most_numbers - Function prototype
 *
 * Description: Prints all numbers between 0 and 9
 * except for 2 and 4.
 * Return: 0, since it's void.
 * On error, stderr.
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
