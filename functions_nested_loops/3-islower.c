#include "main.h"

/**
 * int _islower(int c) - Function that checks for lowercase character.
 *
 * main - Entry Point
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


int main(void)
{

	int c;

	c = _islower('H');

	_putchar(c + '0');

	c = _islower('o');

	_putchar(c + '0');

	c = _islower(108);

	_putchar(c + '0');

	_putchar('\n');

	return (0);

}
