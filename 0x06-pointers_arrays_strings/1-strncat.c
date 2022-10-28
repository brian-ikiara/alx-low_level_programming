#include "main.h"

/**
 * _strlen - Function prototype
 * @s: String to be checked
 *
 * Description: Returns the length of a given string.
 * Return: i, the counter.
 * On error, stderr.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

/**
 * _strncat - Function prototype
 * @dest: Buffer pointer
 * @src: Source pointer
 * @n: Number of bytes allocated
 *
 * Description: Concatenates 2 strings; prevents buffer
 * overflow (stack smashing).
 * Return: dest, the concatenated(buffer) string.
 * On error, stderr.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
