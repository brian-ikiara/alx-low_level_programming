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

	i = 0;
	j = 0;
	if (n > 0)
	{
		while (i < n)
		{
			while (j < n)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
