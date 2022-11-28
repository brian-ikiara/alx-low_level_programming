#include "lists.h"
#include <string.h>

/**
 * add_node - Function
 * @head: Double pointer to first node
 * @str: Member of struct Node initializer
 *
 * Description: Adds a new node to the beginning of
 * the linked list.
 * Return: address, address of the new node.
 * On error, NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate = strdup(str);
	int length = 0;
	list_t *address = malloc(sizeof(list_t));

	/* Edge case I */
	if (address == NULL)
		return (NULL);
	/* Edge case II */
	if (duplicate == NULL)
	{
		free(address);
		return (NULL);
	}

	/* Iterates through str and the result is the length */
	while (str[length])
		length++;

	/* Where the magic happens */
	address->str = duplicate;
	address->length = length;
	address->next = *head;
	*head = address;

	/* Memory address of new node */
	return (address);
}
