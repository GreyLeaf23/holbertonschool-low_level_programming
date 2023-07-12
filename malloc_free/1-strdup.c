#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Points to a new allocated space in memory.
 * @str: Assigned string.
 *
 * Return: NULL if the str fails.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, r;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	duplicate = malloc(sizeof(char) * (i + 1));


	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		duplicate[r] = str[r];
	}

	free(duplicate);

	return (duplicate);
}
