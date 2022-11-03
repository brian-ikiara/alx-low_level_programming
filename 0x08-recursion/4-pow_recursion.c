#include "main.h"

/**
 * _pow_recursion - Function prototype
 * @x: Base
 * @y: Power
 *
 * Description: Returns the y-exponent of x.
 * Return: y-exponent of x.
 * On error, stderr.
 */

int _pow_recursion(int x, int y);
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
