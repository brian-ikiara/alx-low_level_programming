#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Variadic function
 * @separator: Separator
 * @n: Count
 *
 * Description: Prints a list of strings using variadic
 * arguments.
 * Return: void.
 * On error, stderr.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	u_i i;
	va_list a;

	if (n > 0)
	{
		va_start(a, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(a, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
