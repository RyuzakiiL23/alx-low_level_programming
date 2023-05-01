#include "lists.h"

size_t print_listint(const listint_t *h)
{
  unsigned int count = 0;

  if (h == NULL)
    return (1);
  while (h != NULL)
  {
    printf("%d\n", h->n);
    count++;
    h = h->next;
  }
  return(count);
}
