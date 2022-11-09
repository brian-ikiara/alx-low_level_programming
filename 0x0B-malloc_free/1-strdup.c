#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function prototype
 * @str: String to be duplicated
 *
 * Description: Returns a pointer to a newly allocated space
 * in memory, that contains a copy of the string given as a
 * parameter.
 * Return: d, duplicate of string; NULL, if str is NULL.
 * On error, stderr.
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *d;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	d = malloc(sizeof(char) * (len + 1));

	if (d == NULL)
		return (NULL);
	while ((d[i] = str[i]) != '\0')
	{
		i++;
	}

	return (d);
}
