#include "main.h"

/**
 * clear_bit - Function
 * @n: Pointer to bit
 * @index: Value position
 *
 * Description: Does inverse of set_bit().
 * Return: 1, success.
 * On error, -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Edge case */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Inverse of set_bit() */
	*n &= ~(1 << index);

	return (1);
}
