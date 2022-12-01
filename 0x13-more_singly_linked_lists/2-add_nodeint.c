#include "lists.h"

/**
 * add_nodeint - Function
 * @head: Double pointer to head
 * @n: Initializer of struct listint_s element n
 *
 * Description: Adds a new node to the beginning of
 * the linked list.
 * Return: a, address of new node.
 * On error, NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	const int num = n;
	listint_t *a = malloc(sizeof(listint_t));

	/* Edge case */
	if (a == NULL)
		return (NULL);

	/* Initialize data of node with n */
	a->n = num;
	/* Assign value of next to head */
	a->next = *head;
	/* Finally swap value of head to be the address of a */
	*head = a;

	/* Memory address of new node */
	return (a);
}
