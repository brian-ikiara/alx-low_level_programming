#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program's entry point
 * @argc: Number of cmds
 * @argv: Array of args
 *
 * Description: Returns the product of 2 numbers.
 * Return: 0, success.
 * On error, 1.
 */

int main(int argc, char *argv[])
{
	int i = atoi(argv[1]), j = atoi(argv[2]), r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	r = i * j;
	printf("%d\n", r);

	return (0);
}
