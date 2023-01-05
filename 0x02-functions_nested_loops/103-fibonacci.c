#include "main.h"

/**
 * main - Function
 *
 * Description: Prints out the Fibonacci series.
 * Return: 0.
 * On error, stderr.
 */

int main(void)
{
	long int i, n1 = 0, n2 = 1, fib;

	for (i = 2; fib <= 4000000; ++i)
	{
		fib = n1 + n2;
		if ((fib % 2) == 0)
		{
			if (fib <= 3499999)
				printf("%ld, ", fib);
			else
				printf("%ld", fib);
		}
		n1 = n2;
		n2 = fib;
	}
	printf("\n");

	return (0);
}
