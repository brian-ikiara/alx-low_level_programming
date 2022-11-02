#include "main.h"

/**
 * rot13 - Function prototype
 * @s: String to be encoded
 *
 * Description: Encodes a string s in the rot13 format.
 * Return: s, Fgevat.
 * On error, stderr.
 */

char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[i];
			}

			j++;
		}

		i++;
	}

	return (s);
}
