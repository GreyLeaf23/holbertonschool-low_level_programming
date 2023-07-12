#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: string 1 to concat.
 * @s2: string 2 to concat.
 *
 * Return: strings to connect. (Concatenate)
 */

char *str_concat(char *s1, char *s2)
{
int i, j; /*Variables that represent the parameters on top.*/

char *p; /*Newly allocated pointer.*/

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

p = malloc(strlen(s1) + strlen(s2) + 1); /*Memory space made for 'for loops'*/

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++) /*Function that connects both strings*/
	{
		p[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i++] = s2[j];
	}

	return (NULL);

}
