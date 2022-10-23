#include "main.h"

/**
 * print_triangle - Function prototype
 * @size: The length and height of the triangle.
 *
 * Description: Prints a left-hand side triangle with base
 * and height equal to the value of parameter size.
 * Return: 0, since it's void.
 * On error, stderr.
 */

void print_triangle(int size)
{
	int i, j;

	i = 1;
	while (i <= size && size > 0)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}

		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}

	if (i == 1)
		putchar('\n');
}
