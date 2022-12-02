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
	/* Temporarily assign the value of head */
	listint_t *curr = head;

	/* Edge case */
	if (head == NULL)
		return (NULL);

	/* Loop through the linked list */
	if (index)
	{
		while (curr != NULL)
		{
			if (i != index)
				curr = curr->next;
			i++;
		}
		return (curr);
	}
	else
		return (NULL);
}
