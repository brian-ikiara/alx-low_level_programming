#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	/**
	 * char - Data type
	 * Description: Class of ASCII characters
	 * denoted by '', e.g. 'a'
	 */
	char c;
	c = 'a';

	/**
	 * while - Loop type
	 * Description: Returns output as long a condition
	 * remains True.
	 */
	while ((c != 'q' || c != 'e') && c <= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
