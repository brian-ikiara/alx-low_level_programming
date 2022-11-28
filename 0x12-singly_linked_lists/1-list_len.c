#include "lists.h"

/**
 * list_len - Function
 * @h: Pointer to head
 *
 * Description: Returns number of elements in a linked
 * list.
 * Return: n, number of elements.
 * On error, stderr.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
