#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function prototype
 * @d: Dog's profile
 *
 * Description: Gives the dog's profile.
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name)
		printf("Name: %s\n", (*d).name);
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", (*d).age);

	if ((*d).owner)
		printf("Owner: %s\n", (*d).owner);
	else
		printf("Owner: (nil)\n");
}
