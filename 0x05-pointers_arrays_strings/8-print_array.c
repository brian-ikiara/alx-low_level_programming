#include "main.h"
#include <stdio.h>

/**
 * print_array - Function prototype
 * @a: Pointer to array
 * @n: Number of elements in array
 *
 * Description: Prints an array of integers.
 * Return: 0, since it's void.
 * On error, stderr.
 */

void print_array(int *a, int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			_putchar(',');
			_putchar(' ');
		}
	}
}
