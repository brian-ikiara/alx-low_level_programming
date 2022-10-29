#include "main.h"

/**
 * string_toupper - Function prototype
 * @s: String to be CAPITALIZED
 *
 * Description: Changes all lowercase characters in a
 * string to UPPERCASE.
 * Return: cs, capitalized STRING.
 * On error, stderr.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
