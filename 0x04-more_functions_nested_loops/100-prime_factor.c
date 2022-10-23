#include <stdio.h>

/**
 *
 * Description: Prints the prime factors of any
 * number.
 * Return: 0, as always.
 * On error, stderr.
 */

int main(void)
{
	long n = 612852475143, d = 2, lp = 0;

	while (n != 1)
	{
		if ((n % d) == 0)
		{
			n = n / d;
			lp = d;
		}

		d++;
	}
	printf("%d\n", lp);

	return (0);
}
