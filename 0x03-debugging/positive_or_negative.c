#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of program
 *
 * Description: Checks if number is either positive
 * or negative.
 * Return: 0, as always.
 * On error, stderr.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("\n");
	}

	return (0);
}
