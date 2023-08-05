#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node to linked list.
 * @h: starting point of linked list.
 * @idx: index for linked list.
 *
 * Return: insert new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *move = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));


	while (idx != '\0')
	{
		move = move->next;
		if (move == NULL)
			return (NULL);

		idx++;
	}

	if (move->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = move->next;
	new_node->prev = move;
	move->next->prev = new_node;
	move->next = new_node;

	return (new_node);
}
