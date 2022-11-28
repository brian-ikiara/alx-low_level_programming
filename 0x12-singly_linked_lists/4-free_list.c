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

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		/* head->next is automatically NULL */
		temp = head->next;
		/* First element, a character array, is freed */
		free(head->str);
		/* Pointer head is also freed */
		free(head);
		/* head is set to NULL */
		head = temp;
	}
}
