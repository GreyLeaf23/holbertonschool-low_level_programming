#include "main.h"

/**
 * _puts_recursion - Print a string
 * @s: char
 */

void _puts_recursion(char *s)
{

int a = 0;

while (s[a] != '\0')
{
	_putchar(s[a]);
	a++;
}

_putchar('\n');

}
