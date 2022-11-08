#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program's entry point
 * @argc: Number of cmds
 * @argv: Array of args
 *
 * Description: Adds 2 numbers using main().
 * Return: 0.
 * On error, 1.
 */

int main(int argc, char *argv[])
{
	int i, j, s = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		s += atoi(argv[i]);
	}
	printf("%d\n", s);

	return (0);
}
