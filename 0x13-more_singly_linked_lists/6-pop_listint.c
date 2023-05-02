#include "lists.h"
/**
* pop_listint - deletes the head nodes of listint_t.
* @head: node's head.
* Return: returns the head node’s data.
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
	return (0);
	}

	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
