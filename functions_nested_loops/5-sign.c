#include "main.h"

/**
 * print_sign - Function that prints the sign of a number.
 * @n: Integer from prototype.
 * Return: Always 0
 */

int print_sign(int n)

{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

	_putchar('\n');
	return (0);
}
