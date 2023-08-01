#include "lists.h"

/**
 * add_node - new 'node' to linked list.
 * @head: starting point of linked list.
 * @str: string of characters.
 *
 * Return: new node.
 */

list_t *add_node(list_t **head, const char *str)
{
size_t index = 0;

list_t *new_node = malloc(sizeof(list_t));


	if (new_node == NULL || str == NULL)
	{
	return (NULL);
	}
		else if (new_node->str == NULL)
		{
		return (NULL);
		}
			else
			{
				while (head != NULL)
				{
				new_node->next = *head;
				*head = new_node;
				index++;
				}
			}

return (new_node);
}
