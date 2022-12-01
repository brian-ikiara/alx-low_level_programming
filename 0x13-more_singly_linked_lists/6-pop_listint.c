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

	/* head_ptr stores address of head */
	head_ptr = *head;
	/* head's data is stored in ndata */
	ndata = (*head)->n;
	/* head now points to the second node */
	*head = (*head)->next;
	/* Original head is set to NULL by free() */
	free(head_ptr);
	/* head_ptr is refreshed */
	head_ptr = NULL;

	/* Node's data */
	return (ndata);
}
