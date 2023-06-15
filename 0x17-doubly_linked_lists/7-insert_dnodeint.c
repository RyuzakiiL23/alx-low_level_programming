#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *                           in a doubly linked list.
 * @h: Pointer to a pointer to the head node.
 * @idx: Index of the list where the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the newly inserted node, or NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	unsigned int count = 0;
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}

	free(new_node); // Clean up in case insertion failed
	return (NULL);
}

