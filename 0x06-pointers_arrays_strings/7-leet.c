#include "main.h"

/**
 * leet - Function prototype
 * @s: String to be encoded
 *
 * Description: Encodes a string to 1337(leet) speak format.
 * Return: s, 57ring.
 * On error, stderr.
 */

char *leet(char *s)
{
	int i = 0, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = n[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}
