#include "function_pointers.h"
#include <stdio.h>

/**
 * _ps - Function prototype
 * @s: String to be printed
 *
 * Description: Prints a string.
 * Return: void.
 * On error, stderr.
 */

void _ps(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}

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
	f = &_ps;
	f(name);
}
