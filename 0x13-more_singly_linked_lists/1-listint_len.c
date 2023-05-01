#include "lists.h"
/**
* listint_len - gives nodes len.
* @h: pointer to nodes head.
* Return: return number of elements.
*/
size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;

	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
