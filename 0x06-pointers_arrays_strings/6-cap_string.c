#include "main.h"

/**
 * _strlen - Function prototype
 * @str: String to be checked
 *
 * Description: Returns the length of a string.
 * Return: i, the counter.
 * On error, stderr.
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	return (i);
}

/**
 * string_toupper - Function prototype
 * @sr: String to be CAPITALIZED
 *
 * Description: Capitalizes a given string.
 * Return: sr, STRING.
 * On error, stderr.
 */

char *string_toupper(char *sr)
{
	int i;

	for (i = 0; sr[i] != '\0'; i++)
	{
		if (sr[i] >= 'a' && sr[i] <= 'z')
		{
			sr[i] = sr[i] - 32;
		}
	}

	return (sr);
}

/**
 * cap_string - Function prototype
 * @s: String to be CAPITALIZED
 *
 * Description: Capitalizes all words of a given string s.
 * Return: s, String String String.
 * On error, stderr.
 */

char *cap_string(char *s)
{
	int i, l = _strlen(s);

	for (i = 0; i <= l; i++)
	{
		if (i == 0)
		{
			s[i] = string_toupper(s[i]);
		}
		else if (s[i] == ' ')
		{
			s[i - 1] = string_toupper(s[i - 1]);
			s[i + 1] = string_toupper(s[i + 1]);
		}
	}

	return (s);
}
