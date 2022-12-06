#include "main.h"

/**
 * print_binary - Function
 * @n: Number
 *
 * Description: Converts a number from decimal to
 * binary.
 * Return: void.
 * On error, stderr.
 */

void print_binary(unsigned long int n)
{
	/* Employ recursion to loop through n */
	if (n > 1)
		print_binary(n >> 1);
	/* Print the result of intersection of n and 1 */
	_putchar((n & 1) + '0');
}
