#include "main.h"

/**
 * _strlen_recursion - Function prototype
 * @s: String pointer
 *
 * Description: Returns the length of a string s using recursion.
 * Return: Length of the string.
 * On error, stderr.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
