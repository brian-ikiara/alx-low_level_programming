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
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
