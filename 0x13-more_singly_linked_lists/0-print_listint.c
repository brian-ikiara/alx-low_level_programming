#include "lists.h"

/**
 * print_listint - Function
 * @h: Pointer to head
 *
 * Description: Prints all elements of a listint_t list.
 * Return: nodes, number of nodes.
 * On error, stderr.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
