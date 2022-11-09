#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function prototype
 * @size: Array size
 * @c: Initializing char
 *
 * Description: Creates an array of characters and initializes
 * it with a specific character.
 * Return: a, pointer to array.
 * On error, NULL.
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *a = malloc(size);

	if (size == 0)
		return (NULL);
	if (a == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
