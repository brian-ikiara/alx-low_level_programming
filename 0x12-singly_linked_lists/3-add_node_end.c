#include "lists.h"

/**
 * add_node_end - Function
 * @head: Double pointer to first node
 * @str: Member of struct Node initializer
 *
 * Description: Adds a new node to the end of the
 * linked list.
 * Return: *head, pointer to head.
 * On error, NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate = strdup(str);
	int length = strlen(str);
	list_t *init = malloc(sizeof(list_t)), *final;

	/* Edge case I */
	if (init == NULL)
		return (NULL);
	/* Edge case II */
	if (str == NULL)
	{
		free(init);
		return (NULL);
	}

	/* Out with the old */
	init->str = duplicate;
	init->len = length;
	init->next = NULL;

	/* In with the new */
	if (*head == NULL)
		*head = init;
	else
	{
		final = *head;
		while (final->next != NULL)
			final = final->next;
		final->next = init;
	}

	return (*head);
}
