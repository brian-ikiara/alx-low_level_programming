#include <unistd.h>

/**
 * _putchar - Function prototype
 * @c: Character to print
 *
 * Description: Prints a character(putchar() implementation).
 * Return: 1, success.
 * On error, stderr.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
