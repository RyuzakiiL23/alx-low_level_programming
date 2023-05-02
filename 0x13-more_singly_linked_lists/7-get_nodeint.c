#include "lists.h"
/**
* get_nodeint_at_index - free listint.
* @head: node's head.
* @index: index of node.
* Return:  the nth node of a listint_t.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (0);
}
