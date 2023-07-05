#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the square of
 * Result: The resulting square root.
 */

int _sqrt_recursion(int n)
{
	if (n <0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

return (_sqrt_recursion(n,0));

}
