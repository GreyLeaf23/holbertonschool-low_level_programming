#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Input value.
 * @y: Raised to the power of.
 * Return: Raised value.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}


return (x * _pow_recursion(x, y - 1));

}
