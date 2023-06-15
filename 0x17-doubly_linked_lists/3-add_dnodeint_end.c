#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the newly added node, or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
	}

	tmp = *head;
	while (*head != NULL)
	{
		if ((*head)->next == NULL)
		{
			(*head)->next = new_node;
			new_node->prev = *head;
			new_node->n = n;
			new_node->next = NULL;
		}
		*head = (*head)->next;
	}
	*head = tmp;
	return (*head);
}
