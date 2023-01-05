#include "main.h"

/**
 * main - Function
 *
 * Description: Prints the sum of numbers from 0 th 1024
 * that are multiples of 3 or 5.
 * Return: 0.
 * On error, stderr.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
