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

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (i == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
