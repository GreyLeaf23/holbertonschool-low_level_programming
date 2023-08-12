#include "main.h"

/**
 * hash_table_create - create hash table.
 * @size: size of hash table.
 *
 * Return: created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *new_table;

if (size == 0)
	return (NULL);

new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

if (new_table == NULL)
	return (NULL);

new_table->size = size;
new_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}

return (new_table);
}
