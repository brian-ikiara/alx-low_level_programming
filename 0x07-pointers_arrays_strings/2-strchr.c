#include "main.h"

/**
 * _strchr - Function prototype
 * @s: String pointer
 * @c: Character to be checked
 *
 * Description: Returns a pointer to the first occurence of the
 * character c in the string s, or NULL if character is not found.
 * Return: *cp, pointer to c; NULL otherwise.
 * On error, stderr.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s[i]);
		}

		i++;
	}

	return ('\0');
}
