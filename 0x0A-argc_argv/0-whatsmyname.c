#include <stdio.h>

/**
 * main - Entry point of program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Description: Prints the name of the program.
 * Return: Nothing, since it's void..
 * On error, stderr.
 */

void main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
}
