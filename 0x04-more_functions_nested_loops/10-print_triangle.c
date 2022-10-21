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
	int i = 1, j;

	for (i; i <= size && size > 0; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			_putchar(' ');
		}
		
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	
	if (i == 1)
	{
		_putchar('\n');
	}
}
