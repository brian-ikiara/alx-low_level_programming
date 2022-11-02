#include "main.h"

/**
 * _strpbrk - Function prototype
 * @s: String to be located
 * @accept: Accepted bytes
 *
 * Description: Locates the first occurence of a string s of
 * byte size accept. Returns a pointer to byte s that matches
 * one of the bytes in accept, or NULL otherwise.
 * Return: s, string pointer.
 * On error, stderr.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');
}
