#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function prototype
 * @nmemb: Number of elements
 * @size: Array size
 *
 * Description: calloc() implementation using malloc().
 * Return: m, memory address.
 * On error, NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	void *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);

	b = m;
	for (i = 0; i < (nmemb * size); i++)
		b[i] = '\0';

	return (m);
}
