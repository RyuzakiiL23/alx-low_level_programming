#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at a given index.
* @head: Double pointer to the head of the list.
* @index: Index of the node to delete.
*
* Return: 1 if the deletion succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *next = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		next->prev = NULL;
		*head = next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		if (index == count + 1)
		{
			current->next = current->next->next;
			current->next->next->prev = next;
			return (1);
		}
		count++;
		current = current->next;
	}

	free(current);
	return (-1);
}
