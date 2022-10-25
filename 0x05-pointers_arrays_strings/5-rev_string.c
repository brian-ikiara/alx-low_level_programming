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
	int i = 0, l = 0;
	char t;

	while (s[i++] != '\0')
		l++;

	for (i = l + 1; i >= (l / 2); i--)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
