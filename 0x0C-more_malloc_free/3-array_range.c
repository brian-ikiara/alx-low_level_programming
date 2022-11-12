#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function prototype
 * @min: Lowest index
 * @max: Highest index
 *
 * Description: Creates an ordered array of integers
 * from smallest to largest.
 * Return: a, pointer to array.
 * On error, NULL.
 */

int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;
	a = malloc(sizeof(int) * s);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		a[i] = min++;

	return (a);
}
