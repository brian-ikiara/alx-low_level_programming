#include "main.h"

/**
 * print_diagonal - Function prototype reference
 * @n: Number of times to repeat.
 *
 * Description: Prints diagonals based on the value of
 * n given. We'll be using '\'.
 * Return: 0, since it's void.
 * On error, stderr.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
