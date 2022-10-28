#include "main.h"

/**
 * _strncpy - Function prototype
 * @dest: Buffer pointer
 * @src: Source pointer
 * @n: Number of bytes
 *
 * Description: Copies a given string while preventing
 * buffer overflows (stack smashing).
 * Return: dest, copied string (buffer).
 * On error, stderr.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
