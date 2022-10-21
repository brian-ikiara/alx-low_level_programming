#include "main.h"

/**
 * _isupper - Function prototype
 * @c: Character to be checked
 *
 * Description: Checks if a char is uppercase.
 * Return: 1 if uppercase, 0 otherwise.
 * On error, stderr.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
