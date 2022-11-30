#include "lists.h"

/**
 * free_list - Function
 * @head: Pointer to head
 *
 * Description: Frees the memory used by the
 * linked list.
 * Return: void.
 * On error, stderr.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		/* Temporarily assign next to temp */
		temp = head->next;
		/* Call free() */
		free(head);
		/* Swap the two */
		head = temp;
	}
}
