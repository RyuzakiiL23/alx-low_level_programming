#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the node at a given index.
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to be retrieved.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
