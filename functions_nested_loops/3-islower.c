#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 * @c: Lowercase character
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
