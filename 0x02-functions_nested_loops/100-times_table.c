#include "main.h"

/**
 * print_times_table - Function prototype
 * @n: Number times table is for
 *
 * Description: Prints out times table for any number
 * less than 15 or greater than 0.
 * Return: 0, since it's void.
 * On error, stderr.
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 || n <= 15)
	{
		for (i = 0; i <= n; x++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
				{
					_putchar(k + '0');
				}

				if (k <= n && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= (n + 1))
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
