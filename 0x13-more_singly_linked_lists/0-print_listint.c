#include "lists.h"
/**
* print_listint - prints nodes.
* @h: pointer to nodes head.
* Return: return number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
