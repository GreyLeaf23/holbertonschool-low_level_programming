#include "main.h"

/**
 * _strlen_recursion - Returns length of a string.
 * @s: String to measure.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{

int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

return (length);

}
