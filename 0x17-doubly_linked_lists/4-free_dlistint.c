#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head node of the list.
 *
 * Description: Frees all the nodes of a doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
