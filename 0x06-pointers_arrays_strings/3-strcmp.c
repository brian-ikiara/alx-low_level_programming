#include "main.h"

/**
 * _strlen - Function prototype
 * @s: String to be checked
 *
 * Description: Returns length of a given string.
 * Return: i, the counter.
 * On error, stderr.
 */

int _strlen(char *s)
{
	if (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

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
	int l1 = _strlen(s1), l2 = _strlen(s2);

	if (l1 > l2)
	{
		return (l1);
	}
	else if (l2 > l1)
	{
		return (l2);
	}
	else if (_strcmp(s2, s1) && s1 > s2)
	{
		return (l1 * -1);
	}
	else
		return (0);
}
