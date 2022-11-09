#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function prototype
 * @s1: First string
 * @s2: Second string
 *
 * Description: Similar to strcat(), but it uses malloc().
 * Return: cs, concatenated string; NULL, if empty.
 * On error, stderr.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, il = 0, jl = 0;
	char *cs;

	while (s1 && s1[il])
		il++;
	while (s2 && s2[jl])
		jl++;

	cs = malloc(sizeof(char) * (il + jl + 1));
	if (cs == NULL)
		return (NULL);

	if (s1)
	{
		while (i < il)
		{
			cs[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (il + jl))
		{
			cs[i] = s2[i];
			i++;
			j++;
		}
	}
	cs[i] = '\0';

	return (cs);
}
