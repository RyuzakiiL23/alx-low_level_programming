#include "lists.h"

/**
 * print_list - Prints all the elements of list_t.
 * @l: A pointer to the head of list_t.
 *
 * Return: The number of nodes in list_t.
 */
size_t print_list(const list_t *l)
{
	size_t count = 0;

	while (l != NULL)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", l->len, l->str);

		count++;
		l = l->next;
	}

	return (count);
}
