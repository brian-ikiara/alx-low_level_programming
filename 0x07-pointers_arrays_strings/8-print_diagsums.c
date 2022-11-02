#include "main.h"

/**
 * print_diagsums - Function prototype
 * @a: Matrix pointer
 * @size: Size of matrix
 *
 * Description: Prints the sum of the 2 diagonals of a square
 * matrix of integers.
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void print_diagsums(int *a, int size)
{
	int l = 0, r = 0, i, j, p;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}

	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}

	printf("%i, %i\n", l, r);
}
