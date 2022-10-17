#include <stdio.h>

/**
 * main - Beginning of program
 * Description: Prints combination of 2 
 * digits from 0 to 9.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int j;

	/*First loop to provide the comma and recursive space*/
	for (i = 0; i <= 9; i++)
	{
		/*Second loop to provide both digits*/
		for (j = 0; j <= 9; j++)
		{
			/**
			 * putchar(<modulo 10> + '0')
			 * Description: The modulus is used instead of the
			 * actual digit because it is the point at which the
			 * loop wraps around, similar to a clock and how
			 * 4 hours ahead of 9 a.m. is 1 p.m. instead of
			 * 13 p.m. (Modular Arithmetic)
			 */
			if (i < j)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');

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
