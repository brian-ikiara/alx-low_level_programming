#include "lists.h"

/**
 * listint_len - Function
 * @h: Pointer to head
 *
 * Description: Returns number of elements in a linked
 * list.
 * Return: n, number of elements.
 * On error, stderr.
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	/* Loops through as long as h is not NULL and increments n's value */
	while (h)
	{
		h = h->next;
		n++;
	}

	/* List's length */
	return (n);
}
