#include "main.h"

/**
 * struct dog -  Data structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Creates dog's profile.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

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

	return (d);
}
