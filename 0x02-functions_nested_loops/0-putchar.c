#include "main.h"

/**
 * main - Beginning of program
 *
 * Description: Prints "_putchar".
 * Return: 1.
 */

int main(void)
{
	/* Declares string as array */
	char s[8] = "_putchar";
	int i = 0;

	/* Returns char elements in the string array s */
	do {
		_putchar(s[i]);
		i++;
	} while (i < 8);
	_putchar('\n');

	return (0);
}
