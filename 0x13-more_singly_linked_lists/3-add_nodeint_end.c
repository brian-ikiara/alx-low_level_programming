#include "lists.h"

/**
 * add_nodeint_end - Function
 * @head: Double pointer to head of node
 * @n: Initializer of member n of struct listint_s
 *
 * Description: Adds a new node to the end of the
 * linked list.
 * Return: *head, pointer to head.
 * On error, NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	const int num = n;
	listint_t *init = malloc(sizeof(listint_t)), *final;

	/* Edge case */
	if (init == NULL)
		return (NULL);

	/* Out with the old */
	init->n = n;
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
