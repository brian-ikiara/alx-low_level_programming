#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Function prototype
 * @array: Pointer to array
 * @size: Array size
 * @action: Pointer to the function to be used
 *
 * Description: Executes a function given as a parameter
 * on each element of an array.
 * Return: void.
 * On error, stderr.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
