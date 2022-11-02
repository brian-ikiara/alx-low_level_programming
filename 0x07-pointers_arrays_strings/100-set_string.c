#include "main.h"

/**
 * set_string - Function prototype
 * @s: Double pointer to string
 * @to: Pointer to char
 *
 * Description: Sets value of a pointer to a char.
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
