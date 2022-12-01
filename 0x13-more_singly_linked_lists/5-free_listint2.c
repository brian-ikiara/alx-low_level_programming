#include "lists.h"

/**
 * free_listint2 - Function
 * @head: Double pointer to head
 *
 * Description: Frees a listint_t linked list.
 * Return: void.
 * On error, stderr.
 */

void free_listint2(listint_t **head)
{
	listint_t *head_ptr;

	/* Edge case */
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		/* head_ptr to point to address of *head */
		head_ptr = *head;
		/* *head is assigned value of next node */
		*head = head_ptr->next;
		/* head is ultimately set to NULL by free() */
		free(head_ptr);
	}
}
