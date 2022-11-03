#include "main.h"

/**
 * factorial - Function prototype
 * @n: Number factored
 *
 * Description: Returns the factorial of a number n
 * using recursion.
 * Return: The factorial.
 * On error, stderr.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
