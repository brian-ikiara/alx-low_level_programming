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

	for (int i = 0; ; i++)
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);

		int a1 = (int) s1[i];
		int a2 = (int) s2[i];

		if (a1 > a2)
			return (l1);
		if (a2 > a1)
			return (l1 * -1);
}
