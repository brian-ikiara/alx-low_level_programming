#include "lists.h"

/**
 * insert_nodeint_at_index - Function
 * @head: 2dph
 * @idx: Index to be added at
 * @n: Initializer of member n of struct listint_s
 *
 * Description: Adds a new node to linked list at a given
 * position idx.
 * Return: new_node, address of new node; NULL, otherwise.
 * On error, stderr.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Counter, new node & temporary location */
	int num = n;
	unsigned int i;
	listint_t *new_node = malloc(sizeof(listint_t)), *temp = head;

	/* Edge case I */
	if (new_node == NULL)
		return (NULL);
	/* Data is assigned, if false */
	new_node->n = num;

	/* Edge case II */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
		{
			temp = temp->next;
			/* Edge case III */
			if (temp == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		/* Swap the value of new_node with temp */
		new_node->next = temp->next;
		/* Add new node to the index, finally */
		temp->next = new_node;
	}

	/* mem_add new_node */
	return (new_node);
}
