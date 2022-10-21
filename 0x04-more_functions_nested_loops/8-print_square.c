#include "main.h"

/**
 * print_square - Function prototype
 * @size: The length of the square
 *
 * Description: Prints a square of a given length
 * based on the value of parameter size.
 * Return: 0, since it's void.
 * On error, stderr.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
