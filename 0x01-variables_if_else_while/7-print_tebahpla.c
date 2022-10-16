#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints small alphabets in
 * reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
