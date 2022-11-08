#include <stdio.h>

/**
 * main - Program's entry point
 * @argc: Number of command-line arguments
 * @argv: Array of program's symbols
 *
 * Description: Prints out the number of command-line arguments.
 * Return: 0, success.
 * On error, stderr.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
