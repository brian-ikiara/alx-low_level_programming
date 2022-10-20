#include "main.h"

/**
 * positive_or_negative - Function prototype
 * @i: Number to be checked
 *
 * Description: Checks if number is either positive or
 * negative.
 * Return: 0, since it's void data type.
 * On error, stderr.
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	else
	{
		printf("%d is zero", i);
	}
}
