#include "lists.h"

/**
 * free_dlistint - free linked list.
 * @head: pointer to linked list.
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		free(head->n);
		free(head);
		head = head->next;
		head = head->prev;
	}
}
