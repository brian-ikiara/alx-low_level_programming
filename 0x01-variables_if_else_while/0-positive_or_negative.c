#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Description: This is where the program
 * begins and ends.
 *
 * Return: Always 0.
 */

int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * if - Conditional keyword
	 *
	 * Description: It relates one variable or
	 * condition to another.
	 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/**
	 * else if - More conditions
	 *
	 * Description: It provides more information of
	 * conditions to be met.
	 */
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	/**
	 * else - Marks end of if statement
	 *
	 * Description: Gives alternative to the if
	 * when the condition is not met
	 */
	else
	{
		printf("\n");
	}
	return (0);
}
