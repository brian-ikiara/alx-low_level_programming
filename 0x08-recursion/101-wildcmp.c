#include "main.h"

/**
 * wildcmp - Function
 * @s1: First string
 * @s2: Second string
 *
 * Description: Compares two strings; implements the
 * expansion of the wildcard '*' and returns the ASCII
 * difference of the two strings.
 * Return: 1, if wildcard exists; 0, if not.
 * On error, stderr.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
