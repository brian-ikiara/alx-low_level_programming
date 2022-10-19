#include "main.h"
 /**
  * times_table - Function prototype
  *
  * Description: Prints a literal times table
  * of 9.
  * Return: 0, since it's a void return type.
  * On error, stderr.
  */

void times_table(void)
{
	int x = 0, y = 0, z;

	while (x <= 9)
	{
		while (y <= 9)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(z + '0');
			}

			if (z <= 9 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
