#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strlen - Function prototype
 * @s: String to be checked
 *
 * Description: Returns the length of a given string.
 * Return: i, the counter.
 * On error, stderr.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (0);
}

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
	char *cs, nul = '\0';
	int t;
	unsigned int i = 0, j = 0, s1l = _strlen(s1), s2l = _strlen(s2);

	if (s1 == NULL)
		s1 = &nul;
	if (s2 == NULL)
		s2 = &nul;

	if (n >= s2l)
		t = s1l + s2l;
	else
		t = s1l + n;

	cs = malloc(t + 1);
	if (cs == NULL)
		return (NULL);

	while (s1[1] != '\0')
		cs[j++] = s1[i++];
	
	i = 0;
	while (s2[i] != '\0' && n-- != 0)
		cs[j++] = s2[i++];

	cs[j] = nul;

	return (cs);
}
