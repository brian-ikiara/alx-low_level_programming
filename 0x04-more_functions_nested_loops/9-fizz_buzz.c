#include "main.h"

/**
 * main - Entry point of program
 *
 * Description: Prints "Fizz" if a number is a
 * multiple of 3, "Buzz" if multiple of 5 & "FizzBuzz"
 * if divisible by both.
 * Return: 0, as always.
 * On error, stderr.
 */

int main(void)
{
	int i;

	i = 1;
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

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');

	return (0);
}
