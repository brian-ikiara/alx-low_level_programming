#include "main.h"

/**
 * more_numbers - Function prototype
 *
 * Description: Prints numbers 0 to 14 on
 * 10 lines.
 * Return: 0, since it's void.
 * On error, stderr.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
