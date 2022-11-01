#include "main.h"

/**
 * _memset - Function prototype
 * @s: Memory address
 * @b: Constant byte
 * @n: Number of bytes pointed at
 *
 * Description: Fills the first n bytes of the memory address
 * pointed to by s with the constant byte b.
 * Return: *s, pointer to memory address.
 * On error, stderr.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = b;
	}

	return (s);
}
