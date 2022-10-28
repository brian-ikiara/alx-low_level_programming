#include "main.h"

/**
 * _strlen - Function prototype
 * @s: String to be checked
 *
 * Description: Returns string length.
 * Return: i, counter.
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
 * _strcat - Function prototype
 * @dest: Destination pointer
 * @src: Source pointer
 *
 * Description: Conacatenates (adds) two strings
 * together and outputs the result.
 * Return: _strcat, the concantenated string.
 * On error, stderr.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len;

	len = _strlen(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
