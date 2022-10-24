#include <stdio.h>
#include <math.h>

/**
 * max_prime - Function prototype
 * @n: Number to be checked
 *
 * Description: Prints the prime factors of any
 * number.
 * Return: 0, as always.
 * On error, stderr.
 */

int max_prime(int n)
{
	int i, max = -1;

	while ((n % 2) == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while ((n % i) == 0)
		{
			max = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max = n;
	}

	return (max);
}

/**
 * main - Program entry point
 *
 * Description: To determine largest prime factor
 * of 612852475143.
 * Return: 0, as always.
 * On error, stderr.
 */

int main(void)
{
	int i = 612852475143;

	max_prime(i);

	return (0);
}
