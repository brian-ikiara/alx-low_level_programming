#include "main.h"

/**
 * swap_int - Function prototype
 * @a: Swapee
 * @b: Swaper
 *
 * Description: Swaps two integers a and b.
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * reverse_array - Function prototype
 * @a: Array to be reversed
 * @n: Size of array
 *
 * Description: Reverses a given array a of size n.
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void reverse_array(int *a, int n)
{
	int *p = a + (n - 1);

	while (a < p)
	{
		swap(a, p);
		a++;
		p--;
	}

