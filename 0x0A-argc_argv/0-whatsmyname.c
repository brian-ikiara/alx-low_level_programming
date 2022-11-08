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

void main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s", argv[i]);
		i++;
	}
	printf("\n");
}
