#include "main.h"

/**
 * _strcmp - Function prototype
 * @s1: String comparor
 * @s2: String comparee
 *
 * Description: Compares 2 strings and returns 1 if s1
 * is comtained in s2, 0 otherwise.
 * Return: 1 if contained, 0  otherwise.
 * On error, stderr.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			break;

		s1++;
		s2++;
	}

	return (*((unsigned char *) s1) - *((unsigned char *) s2));
}
