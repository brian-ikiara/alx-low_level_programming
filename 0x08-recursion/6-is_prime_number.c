#include "main.h"

/**
 * optimus_prime - Function prototype
 * @d: Dividend
 * @dr: Divisor
 *
 * Description: (Preamble) Checks if number is prime.
 * Return: 1, if prime; 0 otherwise.
 * On error, stderr.
 */

int optimus_prime(int d, int dr)
{
	if ((d % dr) == 0)
		return (0);

	if (dr == (d / 2))
		return (1);

	return (optimus_prime(d, dr + 1));
}

/**
 * is_prime_number - Function prototype
 * @n: Prime to be
 *
 * Description: (Actual) Checks if number is prime.
 * Return: 1, if prime; 0 otherwise.
 * On error, stderr.
 */

int is_prime_number(int n)
{
	int dr = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (optimus_prime(n, dr));
}
