#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function
 * @n: Number
 *
 * Description: Returns the sum of all it's components.
 * Return: sum, sum; 0, if n == 0.
 * On error, stderr.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, j = 0;

	if (n == 0)
		return (0);
	va_start(a, n);
	for (i = 0; i < n; i++)
		j += va_arg(a, int);
	va_end(a);

	return (j);
}
