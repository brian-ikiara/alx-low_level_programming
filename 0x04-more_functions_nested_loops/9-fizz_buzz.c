#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: Prints "Fizz" for a multiple of 3 and
 * "Buzz" for a multiple of 5; "FizzBuzz" for a multiple
 * of both 3 and 5.
 * Return: 0, as always.
 * On error, stderr.
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
