#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the newly added node, or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_list = malloc(sizeof(dlistint_t));

	if (new_list == NULL)
		return (NULL);

	new_list->prev = NULL;
	new_list->n = n;
	new_list->next = *head;

	if (*head != NULL)
		(*head)->prev = new_list;

	*head = new_list;

	return (new_list);
}
