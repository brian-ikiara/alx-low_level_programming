#include "main.h"

/**
 * _sqrt - Function prototype
 * @sq: Square
 * @rt: Root
 *
 * Description: Returns the square root of a number n.
 * Return: rt, root if natural(nat); -1 otherwise.
 * On error, stderr.
 */

int _sqrt(int sq, int rt)
{
	if ((rt * rt) == sq)
		return (rt);

	if (rt == (sq / 2))
		return (-1);

	return (_sqrt(sq, rt + 1));
}

/**
 * _sqrt_recursion - Function prototype
 * @n: Square
 *
 * Description: The actual code.
 * Return: rt, root if nat, -1 otherwise.
 * On error, stderr.
 */

int _sqrt_recursion(int n)
{
	int test = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, test));
}
