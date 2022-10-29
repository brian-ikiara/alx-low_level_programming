#include "main.h"

/**
 * cap_string - Function prototype
 * @s: String to be CAPITALIZED
 *
 * Description: Capitalizes all words of a given string s.
 * Return: s, STRING.
 * On error, stderr.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] == 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
