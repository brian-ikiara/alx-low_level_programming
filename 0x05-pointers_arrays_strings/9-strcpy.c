#include "main.h"

/**
 * _strcpy - Function prototype
 * @dest: Buffer pointer
 * @src: String pointer
 *
 * Description: Copies a string pointed to by src, including
 * the terminating byte '\0' to the buffer pointed to by dest.
 * Return: dest, the buffer.
 * On error, stderr.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] = '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
