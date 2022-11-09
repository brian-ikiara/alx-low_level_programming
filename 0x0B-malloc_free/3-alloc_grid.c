#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function prototype
 * @width: Width of grid
 * @height: Height of grid
 *
 * Description: Prints a grid initialized to 0.
 * Return: a, pointer to 2-D array.
 * On error, NULL.
 */

int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = (int **) malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a[0]);
			for (j = 0; j <= i; j++)
				free(a[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);
}
