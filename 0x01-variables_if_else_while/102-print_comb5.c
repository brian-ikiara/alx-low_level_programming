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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				
				putchar((i / 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');
				putchar((i % 10) + '0');
				putchar((j / 10) + '0');

				if (i != 8 || (i == 8 && j != 9))
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
