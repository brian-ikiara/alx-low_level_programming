#include "main.h"

/**
 * _abs - Function prototype
 * @n: Number to be checked
 *
 * Description: Returns absolute value of integer
 * Return: n if pos, -n if neg, 0 otherwise.
 * On error, stderr.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
		return (0);
}
