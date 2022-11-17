#include "function_pointers.h"

/**
 * print_name - Function prototype
 * @name: Name to be printed
 * @f: Pointer to print_name
 *
 * Description: Prints out a name given.
 * Return: Nothing, since it's void.
 * On error, stderr.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
