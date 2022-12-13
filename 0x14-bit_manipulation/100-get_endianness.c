#include "main.h"

/**
 * get_endianness - Function
 *
 * Description: Checks the endianness of a number.
 * Return: 1, if it works; 0, otherwise.
 * On error, stderr.
 */

int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	return (0);
}
