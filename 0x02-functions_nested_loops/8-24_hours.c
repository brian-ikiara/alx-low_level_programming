#include "main.h"

/**
 * jack_bauer - Function prototype
 *
 * Description: Returns every minute of the
 * 24 hour day.
 * Return: 0
 * On error, stderr.
 */

void jack_bauer(void)
{
	int i = 0, j = 0;

	do {
		do {
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');

			j++;
		} while (j <= 60);

		i++;
	} while (i <= 24);
}
