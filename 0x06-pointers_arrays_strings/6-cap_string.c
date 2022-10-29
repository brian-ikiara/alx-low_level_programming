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

	while (*s != '\0')
	{
		i++;
		str++;
	}

	return (i);
}

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
	int i, l = _strlen(s);

	for (i = 0; i < l; i++)
	{
		if ((i == 0 && s[i] != ' ') || (s[i] != ' ' && s[i - 1] == ' '))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = (char) (('A' - 'a') + s[i]);
			}
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = (char) (s[i] + ('a' - 'A'));
		}
	}

	return (s);
}
