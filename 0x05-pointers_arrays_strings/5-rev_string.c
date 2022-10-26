#include "main.h"

/**
 * rev_string - Function prototype
 * @s: String to be reversed
 *
 * Description: Reverses a string.
 * Return: void.
 * On error, stderr
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char t;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (j = 0; j < (i - 1); j++)
	{
		for (k = j + 1; j > 0; j--)
		{
			t = *(s + k);
			*(s + k) = *(s + (k - 1));
			*(s + (k - 1)) = t;
		}
	}
}
