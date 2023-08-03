#include "lists.h"

/**
 * add_node_end - adding new node at end of linked list.
 * @head: starting point of linked list.
 * @str: string of characters.
 *
 * Return: new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node, *tail;

	new_node = malloc(sizeof(list_t));

	if (str == NULL || new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (new_node->str == NULL)
	return (NULL);

<<<<<<< HEAD
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	tail = *head;

	while (tail->next != NULL)
	tail = tail->next;

	tail->next = new_node;
=======
	

>>>>>>> c111f726a012c625ea1abbc16631343d6da86133
return (new_node);
}
