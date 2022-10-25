#include "main.h"

/**
 * swap_int - Function prototype
 * @a: Number to be swapped
 * @b: Number a's swapped to
 *
 * Description: Swaps the value of 2 integers.
 * Return: void.
 * On error, stderr.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
