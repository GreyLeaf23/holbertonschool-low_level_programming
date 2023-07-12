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
	char *duplicate = _strdup();
	int i, r;

	if (str == 0)
	{
		return (NULL);
	}

	i = 0;
	while (i = 0; str[i] != '\0')
	{
		i++;
	}

	duplicate = malloc(sizeof(char) * (i + 1));


	if (duplicate == 0)
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

