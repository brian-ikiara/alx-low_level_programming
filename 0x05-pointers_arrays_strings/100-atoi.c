#include "main.h"

/**
 * _atoi - Function prototype
 * @s: String input
 *
 * Description: Converts a string to an integer.
 * Return: (oi * pn), integer.
 * On error, stderr.
 */

int _atoi(char *s)
{
	unsigned int i = 0, j = 0, oi = 0, pn = 1, k = 1, l;

	while (s[i] != '\0')
	{
		if (j > 0 && (s[i] < '0' || s[i] > '9'))
			break;

		if (s[i] == '-')
			pn *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (j > 0)
				k *= 10;
			j++;
		}
		
		i++;
	}

	for (l = i - j; l < i; l++)
	{
		oi = oi + ((s[l] - 48) * k);
		k /= 10;
	}

	return (oi * pn);
}
