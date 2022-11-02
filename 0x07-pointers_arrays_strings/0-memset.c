#include "main.h"

/**
 * _memset - Function prototype
 * @s: Memory area
 * @b: Constant byte
 * @n: Number of bytes pointed at
 *
 * Description: Fills the first n bytes of the memory address
 * pointed to by s with the constant byte b.
 * Return: p, pointer to memory area s.
 * On error, stderr.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;
	unsigned int val = b;

	for (i = 0; i < n; i++)
	{
		p[i] = val;
	}

	return (p);
}
