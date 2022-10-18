#include "main.h"

/**
 * _isalpha - Function prototype
 * @c: Character being checked
 *
 * Description: Checks if char is a member of the
 * alphabet set, whether upper or lowercase.
 * Return: 1 if alphabet, 0 otherwise.
 * On error, stderr.
 */

int _isalpha(int c)
{
	/* Returns 1 or 0 based on this condition */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
