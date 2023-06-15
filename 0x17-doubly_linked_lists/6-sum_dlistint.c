#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the integers in a doubly linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: Sum of all the integers in the list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
