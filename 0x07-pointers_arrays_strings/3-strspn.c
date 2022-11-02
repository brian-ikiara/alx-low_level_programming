#include "main.h"

/**
 * _strspn - Function prototype
 * @s: Inital memory segment
 * @accept: Accepted bytes
 *
 * Description: Returns the number of bytes in the initial
 * segment of s which consists only of bytes from accept.
 * Return: n, number of bytes.
 * On error, stderr.
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if  (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}

		s++;
	}

	return (n);
}
