#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Points to a new allocated space in memory.
 * @str: Assigned string.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	/*String to inspect.*/
	char *aaa;
	int i, r;

	if (str == NULL)
	{
		return (NULL);
	}

	/*While loop to inspect.*/
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	aaa = malloc(sizeof(char) * (i + 1));


	if (aaa == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		aaa[r] = str[r];
	}

	return (aaa);
}
