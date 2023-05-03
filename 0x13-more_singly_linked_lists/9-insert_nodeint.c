#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index where new node should be added
 * @n: value to be stored in new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;
	listint_t *tmp;

	new_node->n = n;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		if (i == idx -1)
		{
			tmp = *head;
			(*head)->next = new_node;
			new_node->next = tmp->next;

		}
		i++;
		*head = (*head)->next;
	}

	return (new_node);
}
