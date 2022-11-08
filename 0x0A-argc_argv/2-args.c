#include <stdio.h>

/**
 * main - Program's entry point
 * @argc: Number of cmds
 * @argv: Array of args
 *
 * Description: Prints all arguments it receives.
 * Return: 0, success.
 * On error, stderr.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
