#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * if - Conditional statement
	 * Description: Returns when a certain condition
	 * is met by the code.
	 */
	if ((n % 10) > 5)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", (n % 10));
		printf("and is greater than 5\n");
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", (n % 10));
		printf("and is 0\n");
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d ", n);
		printf("is %d ", (n % 10));
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("\n");
	}
	return (0);
}
