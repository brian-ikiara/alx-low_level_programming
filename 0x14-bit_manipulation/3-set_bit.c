#include "main.h"

/**
 * set_bit - Function
 * @n: Pointer to bit
 * @index: Value position
 *
 * Description: Sets the value of a given bit
 * to 1.
 * Return: 1, success.
 * On error, -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Edge case */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Swap statement by performing an XOR 1 << index */
	*n ^= (1 << index);

	return (1);
}
