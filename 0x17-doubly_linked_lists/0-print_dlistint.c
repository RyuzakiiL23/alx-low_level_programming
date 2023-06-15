#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head node of the list.
 *
 * Return: Number of elements in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
