#include "lists.h"

size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
  }
  return(n);
}
