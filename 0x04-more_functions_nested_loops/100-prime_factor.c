#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: Prints the prime factors of any
 * number.
 * Return: 0, as always.
 * On error, stderr.
 */

int main(void)
{
	long n = 612852475143;
	long d = 2;
	long lp = 0;

	while (n != 1)
	{
		if ((n % d) == 0)
		{
			n = n / d;
			lp = d;
		}

		d += 1;
	}
	printf("%1d\n", lp);

	return (0);
}
