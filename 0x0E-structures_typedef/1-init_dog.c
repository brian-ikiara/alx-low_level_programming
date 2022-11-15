#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Function prototype
 * @d: The dog's profile
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Initializes a variable of type struct dog.
 * Return: d, dog's profile.
 * On error, stderr.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
