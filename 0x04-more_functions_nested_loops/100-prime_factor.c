#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of program
 *
 * Description: Prints the prime factors of any
 * number.
 * Return: 0, as always.
 * On error, stderr.
 */

void prime_numbers(void)
{
	int n = 612852475143;

	while ((n % 2) == 0)
	{
		printf("%d ", 2);
		n /= 2;
	}

	for (int i = 3; i < sqrt(n); i += 2)
	{
		while ((n % i) == 0)
		{
			printf("%d ", i);
			n /= i;
		}
	}

	if (n > 2)
		printf("%d ", n);
}
