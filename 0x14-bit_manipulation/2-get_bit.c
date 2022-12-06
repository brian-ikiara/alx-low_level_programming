#include "main.h"

/**
 * get_bit - Function
 * @n: Bit
 * @index: Position of value
 *
 * Description: Gets value of a bit at a
 * given index.
 * Return: 1/0, value of bit.
 * On error, -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Edge case */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
