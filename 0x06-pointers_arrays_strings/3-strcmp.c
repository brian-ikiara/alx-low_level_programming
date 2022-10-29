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
	int i;

	for (i = 0; s1[i] && s2[i]; ++i)
	{
		if (s1[i] == s2[i] || (s1[i] ^ ' ' == s2[i]))
			continue;
		else
			break;
	}

	if (s1[i] == s2[i])
		return (0);

	if ((s1[i] | ' ') < (s2[i] | ' '))
		return (-1);

	return (1);
}
