#include <stdlib.h>
#include <stdio.h>

/**
 * main - Function prototype
 * @argc: Number of cmds
 * @argv: Array of cmds
 *
 * Description: Prints the minimum number of coins to make change
 * for a given ammount of dollars. (dimes, pennies, quarters)
 * Return: 0.
 * On error, 1.
 */

int main(int argc, char *argv[])
{
	int denom[] = {1, 2, 5, 10, 25}, money, cents = 0, bal, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	bal = money;
	for (i = 0; i < 5; i++)
	{
		cents += bal / denom[i];
		if ((bal % denom[i]) == 0)
			break;

		bal %= denom[i];
	}
	printf("%d\n", cents);

	return (0);
}
