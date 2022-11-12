#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function prototype
 * @ptr: Original mem
 * @old_size: Original number of bytes
 * @new_size: New number of bytes
 *
 * Description: realloc() implementation using malloc() + free().
 * Return: 1. If new_size == old_size, return ptr
 * 2. If new_size > old_size, new mem is not initialized
 * 3. If new_size < old_size, new mem is initialized
 * 4. If ptr == NULL, malloc(new_size) for all values of old/new_size
 * 5. If new_size == 0 && ptr != NULL, free(ptr) and return(NULL)
 * On error, stderr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *op, *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			np[i] = op[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			np[i] = op[i];
	}

	if (ptr == NULL)
		return(malloc(new_size));
	np = malloc(new_size);
	if (!np)
		return(NULL);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	return (np);
}
