#include "main.h"

/**
 * rev_string - Function prototype
 * @str: String to be reversed
 *
 * Description: Reverses a string.
 * Return: void.
 * On error, stderr
 */

void rev_string(char *str)
{
	int l, i;
	char *begin, *end, ch;

	l = _strlen(str);

	begin = str;
	end = str;

	for (i = 0; i < (l - 1); i++)
		end++;

	for (i = 0; i < (l / 2); i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;

		begin++;
		end--;
	}
}
