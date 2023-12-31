#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - an array of chars
 * @size: Size in bytes.
 * @c: char to assign.
 *
 * Return: Pointer to the array or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
