#include "main.h"

/**
 * flip_bits - Function
 * @n: First number
 * @m: Second number
 *
 * Description: Returns number of digits one needs
 * to flip to get from one number to another.
 * Return: b, number of bits.
 * 0n error, stderr.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = 0, x = n ^ m;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}

	return (b);
}
