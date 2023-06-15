#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *                           in a doubly linked list.
 * @h: Pointer to a pointer to the head node.
 * @idx: Index of the list where the new node should be inserted.
 * @n: Value to be stored in the new node.
 * Return: Address of the newly inserted node, or NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *next = NULL, *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (*h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->n = n;
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (*h);
	}
	while (current != NULL)
	{
		if (idx  == count + 1)
		{
			next = current->next;
			current->next = new;
			new->prev = current;
			new->n = n;
			new->next = next;
			next->prev = new;
			current = new;
		}
		count++;
		current = current->next;
	}
	return (current);
}
