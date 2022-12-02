#include "lists.h"

/**
 * get_nodeint_at_index - Function
 * @head: Pointer to first node
 * @index: Index of a node
 *
 * Desscription: Returns the index of the nth node
 * in a linked list.
 * Return: index, index of node; NULL, if non-existent.
 * On error, assert(0); "FAIL".
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	/* Loop through the linked list */
	while (head != NULL)
	{
		/* Returns pointer to node at nth index */
		if (i == index)
			return (head);
		/* Increment mem_add by 8 bytes & i by 1 */
		head = head->next;
		i++;
	}

	/* Returns if index doesn't exist */
	return (NULL);
}
