#include "function_pointers.h"

/**
 * int_index - Function
 * @array: Pointer to array
 * @size: Array size
 * @cmp: Pointer to function used to compare ints
 *
 * Description: Searches for and compares an int to another.
 * Return: i, index of element that doesn't return 0; -1 if no
 * element matches or if size <= 0.
 * On error, stderr.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, temp;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			temp = cmp(array[i]);
			if (temp)
				break;
		}
		if (i < size)
			return (i);
	}

	return (-1);
}
