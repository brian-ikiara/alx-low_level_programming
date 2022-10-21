#include "main.h"

/**
 * _isdigit - Function prototype
 * @c: Number to be checked
 *
 * Description: Checks if char is a digit.
 * Return: 1 if digit, 0 otherwise.
 * On error, stderr.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
