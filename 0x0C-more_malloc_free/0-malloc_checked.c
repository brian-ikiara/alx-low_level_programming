#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Function prototype
 * @b: Size of mem to be allocated
 *
 * Description: Checks if a given amount of mem has been
 * allocated.
 * Return: p, pointer to mem allocation; 98, if p == NULL.
 * On error, stderr.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		return exit(98);
	}
	else
		return (p);
}
