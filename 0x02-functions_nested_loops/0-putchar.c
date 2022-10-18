#include "main.h"

/**
 * main - Beginning of program
 *
 * Description: Prints "_putchar".
 * Return: 1.
 */

int main(void)
{
	char s[8] = "_putchar";
	int i = 0;

	do {
		_putchar(s[i]);
		i++;
	} while (i < 8);
	_putchar('\n');

	return (0);
}
