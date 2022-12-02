#include "lists.h"

/**
 * reverse_listint - Function
 * @head: 2dph
 *
 * Description: Reverses a linked list.
 * Return: *head, tail of original list.
 * On error, stderr.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *prev = NULL;

	/* Loops through list performing SwapOps */
	while (*head != NULL)
	{
		/* I love a good swap in the morning ;) */
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}

	/**
	 * Final value of prev is, "Surprise! Surprise!",
	 * the tail of original list.
	 */
	*head = prev;

	return (*head);
}
