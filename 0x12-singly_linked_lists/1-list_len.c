#include "lists.h"

/**
 * list_len - Returns the number of elements in list_t.
 * @h: A pointer to the head of list_t.
 *
 * Return: The number of elements in list_t.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
