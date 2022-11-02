#include "main.h"

/**
 * cap_string - Function prototype
 * @str: Sting to be CAPITALIZED
 *
 * Description: Capitalizes the first letter of each word
 * contained in string str.
 * Return: str, String String String.
 * On error, stderr.
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char c[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == str[i] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
			}

			j++;
		}

		i++;
	}

	return (str);
}
