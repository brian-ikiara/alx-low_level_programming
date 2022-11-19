#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Variadic function
 * @separator: The separator of the list
 * @n: Count of integers passed to function
 *
 * Description: Prints numbers.
 * Return: void.
 * On error, stderr.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	va_start(a, n);
	for (i = n; i >= 0; i = va_arg(a, int))
	{
		printf("%d", i);
		if (i > 0 && separator != NULL)
			printf("%c", separator);
	}
	_putchar('\n');
	va_end(a);
}
