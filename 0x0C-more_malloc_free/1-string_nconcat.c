#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - Function prototype
 * @s1: First string
 * @s2: Second string
 * @n: First bytes of s2
 *
 * Description: Concatenates 2 strings based on number of bytes
 * provided.
 * Return: cs, Concatenatedstring.
 * On error, NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cs;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		cs = malloc(sizeof(char) * (l1 + n + 1));
	else
		cs = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!cs)
		return (NULL);

	while (i < l1)
	{
		cs[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		cs[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		cs[i++] = s2[j++];

	cs[i] = '\0';

	return (cs);
}
