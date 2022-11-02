#include "main.h"

/**
 * _memcpy - Function prototype
 * @dest: Memory copied to
 * @src: Memory copied from
 * @n: Number of bytes
 *
 * Description: Copies n bytes from memory area src to memory
 * area dest.
 * Return: dest, pointer to dest.
 * On error, stderr.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cs = src;
	char *cd = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		cd[i] = cs[i];
	}

	return (dest);
}
