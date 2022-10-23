#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0, as always.
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
