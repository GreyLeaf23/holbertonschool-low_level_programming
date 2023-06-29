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
		print_sign("+\n");
		return (1);
	}

	else if (n == 0)
	{
		print_sign("0\n");
		return (0);
	}

	else
	{
		print_sign("-\n");
		return (-1);
	}

}
