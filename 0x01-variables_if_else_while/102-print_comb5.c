#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints 2 digit number combos
 * of integers from 0 to 99.
 * Return: 0.
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');
				putchar((i % 10) + '0');
				putchar((j / 10) + '0');

				if (i != 98 || (i == 98 && j != 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
