#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function prototype
 * @n: Number to be checked
 *
 * Description: Returns every number the number
 * n is away from 98.
 * Return: 0, since it's the void data type
 * On error, stderr.
 */

void print_to_98(int n)
{
	/**
	 * I had to use the pfintf function
	 * as opposed to the _putchar, since it:
	 * a) Makes work way easier
	 * b) You don't have to type '0' after an integer
	 * since it references it using %d
	 * c) Enables the statement(s), "n--/n++"
	 */
	if (n >= 98)
	{
		while (n > 98)
		{
			/* Prints positive numbers */
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			/* Prints negative numbers */
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
