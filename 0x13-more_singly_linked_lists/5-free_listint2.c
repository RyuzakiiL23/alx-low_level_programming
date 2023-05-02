#include "lists.h"
/**
* free_listint2 - free listint.
* @head: node's head.
* Return: return void.
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *omar = *head;

	while (omar != NULL)
	{
		tmp = omar;
		omar = omar->next;
		free(tmp);
	}
}
