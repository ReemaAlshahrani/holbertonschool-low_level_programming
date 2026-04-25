#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added, starts at 0
 * @n: integer data for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* If inserting at the very beginning (index 0) */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse the list to find the node before the target index */
	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	/* If the index is out of bounds */
	if (temp == NULL)
		return (NULL);

	/* If the target index is at the very end of the list */
	if (temp->next == NULL && i == (idx - 1))
		return (add_dnodeint_end(h, n));

	/* Insertion in the middle of the list */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;

	/* Link the subsequent node back to the new node */
	if (temp->next != NULL)
		temp->next->prev = new;

	/* Link the current node forward to the new node */
	temp->next = new;

	return (new);
}
