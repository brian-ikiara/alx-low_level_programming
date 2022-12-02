#include "lists.h"

/**
 * sum_listint - Function
 * @head: Pointer to head
 *
 * Description: Returns the sum of the data stored, per
 * node, in a linked list.
 * Return: sum, sum of data.
 * On error, stderr.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Edge case */
	if (head == NULL)
		return (0);
	/* Loop through the list adding the data up */
	while (head)
	{
		sum += head->n;
		/* Increment head by 8 bytes */
		head = head->next;
	}
	/* Return the result */
	return (sum);
}
