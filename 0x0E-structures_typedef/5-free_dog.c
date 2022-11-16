#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function prototype
 * @d: Dog's profile
 *
 * Description: Releases the memory block occupied by
 * profile created by new_dog().
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).name);
	free((*d).owner);
	free(d);
}
