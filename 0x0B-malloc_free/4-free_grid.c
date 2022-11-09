#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function prototype
 * @grid: The 2-D array grid
 * @height: Height of grid
 *
 * Description: Frees the previously created grid
 * in alloc_grid().
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return (void);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
