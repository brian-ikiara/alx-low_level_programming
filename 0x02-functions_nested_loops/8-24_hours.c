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
	int x1 = (i / 10) + '0', x2 = (i % 10) + '0';
	int y1 = (j / 10) + '0', y2 = (j % 10) + '0';

	for (i; i <= 24; i++)
	{
		for (j; j <= 60; j++)
		{
			_putchar(x1);
			_putchar(x2);
			_putchar(':');
			_putchar(y1);
			_putchar(y2);
			_putchar('\n');
		}
	}
}
