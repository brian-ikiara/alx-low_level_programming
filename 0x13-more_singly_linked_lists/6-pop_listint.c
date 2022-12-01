#include "lists.h"

/**
 * pop_listint - Function
 * @head: Double ptr to head(2dph)
 *
 * Description: Deletes the node of the linked list
 * and returns its data. Wie gemein!
 * Return: ndata, the node's data.
 * On error, stderr.
 */

int pop_listint(listint_t **head)
{
	int ndata;
	listint_t *head_ptr;

	/* Edge case */
	if (*head == NULL)
		return (0);

	/* head's data is stored in ndata */
	ndata = (*head)->n;
	/* Second node's address is assigned to head_ptr */
	head_ptr = (*head)->next;
	/* Original head is set to NULL by free() */
	free(*head);
	/* New head is "officially" declared as 2nd node */
	*head = head_ptr;

	/* Node's data */
	return (ndata);
}
