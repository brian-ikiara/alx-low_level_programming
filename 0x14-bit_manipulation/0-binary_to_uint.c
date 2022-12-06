#include "main.h"

/**
 * binary_to_uint - Function
 * @b: Binary digit
 *
 * Description: Converts a binary digit to
 * unsigned int(decimal).
 * Return: u_i, converted number; 0, if other
 * char exist other than 0 or 1 and if b is NULL.
 * On error, stderr.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, u_i = 0;

	/* Edge case I */
	if (b == NULL)
		return (0);

	/* Loop through b and perform XOps */
	for (i = 0; b[i]; i++)
	{
		/* Edge case II */
		if (b[i] < '0' || b[i] > '1')
			return (0);

		/* Crude char to int conversion */
		u_i = (b[i] - '0') + (2 * u_i);
	}

	return (u_i);
}
