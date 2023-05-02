#include "lists.h"
/**
* add_nodeint - adds a new node at the head.
* @head: node's head.
* @n: a given int.
* Return: return the new head.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
