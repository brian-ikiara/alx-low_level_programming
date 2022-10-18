#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: Character to be printed
 *
 * Return; On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(0, &c, 1));
}
