#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Function prototype
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Makes a new dog profile and stores
 * a copy of the dog's name and owner.
 * Return: p, dog's profile.
 * On error, NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (*p == NULL)
		return (NULL);
	
	(*p).name = name;
	strcpy((*p).name);

	(*p).age = age;

	(*p).owner = owner;
	strcpy((*p).owner);

	return (p);
}
