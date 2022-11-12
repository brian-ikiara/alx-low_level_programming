#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Function prototype
 * @b: Size of mem to be allocated
 *
 * Description: Checks if a given amount of mem has been
 * allocated.
 * Return: ptr, pointer to mem allocation.
 * On error, 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
