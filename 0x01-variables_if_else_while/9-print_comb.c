#include <stdio.h>

/**
 * main - Beginning of program
 * Description: Combinatronics.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int j;

	j = i % 10;
	for (i = 0; i <= 9; i++)
	{
		putchar(j + '0');
		if (num == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
