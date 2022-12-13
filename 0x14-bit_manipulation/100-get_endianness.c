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
	size_t x = 1;
	char *c = (char *) &x;

	return (*c);
}
