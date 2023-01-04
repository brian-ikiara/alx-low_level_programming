#include "main.h"

/**
 * rec_strlen - Function
 * @s: String
 *
 * Description: Finds string length; recursively traverses the
 * string returning the length.
 * Return: len, the string length.
 * On error, stderr.
 */

int rec_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += rec_strlen(s + len);
	}

	return (len);
}

/**
 * pal_check - Function
 * @s: String
 * @l: Length
 * @i: Position
 *
 * Description: Checks if a string is a palindrome.
 * Return: 1, if palindrome; 0, otherwise.
 * On error, stderr.
 */

int pal_check(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (pal_check(s, l, i++));

	return (0);
}

/**
 * is_palindrome - Function
 * @s: String
 *
 * Description: Confirms pal_check.
 * Return: 1, if palindrome; 0, otherwise.
 * On error, stderr.
 */

int is_palindrome(char *s)
{
	int i = 0, len = rec_strlen(s);

	if (!(*s))
		return (1);

	return (pal_check(s, len, i));
}
