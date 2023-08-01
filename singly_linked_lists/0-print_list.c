#include "lists.h"

/**
 * print_list - printing elements of 'list_t' list.
 * @h: pointer to list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
size_t index = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
			else
			{
			printf("[%u] %s\n", h->len, h->str);
			}
		index++;
		h = h->next;
	}

return (index);
}
