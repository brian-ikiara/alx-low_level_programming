#include "lists.h"

/**
 * delete_nodeint_at_index - Function
 * @head: 2dph
 * @index: Index ops will be performed
 *
 * Description: Deletes a node at a given index.
 * Return: 1, success; -1, otherwise.
 * On error, stderr.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head, *temp;

	/* Edge case I */
	if (curr == NULL)
		return (-1);

	/* Edge case II */
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	/* Abracadabra! */
	while (i < (index - 1)
	{
		/* Edge case III */
		if (curr->next == NULL)
			return (-1);

		/* Increment curr by 8 bytes */
		curr = curr->next;
		i++;
	}

	/* Swap the current head with the temporary head */
	temp = curr->next;
	curr->next = temp->next;
	/* Free temporary head, which turns out to be original head */
	free(temp);

	return (1);
}
