#include <stdio.h>

/**
 * main - Beginning of program
 * Description: Prints the numbers contained in
 * hexadecimal character set.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	char c;

	/*Prints the first 10 numbers*/
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	/*Prints the last 6 numbers*/
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
