#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Factorial number.
 * Returns: Factorial of n.
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	else (n == 0)
	{
		return (1);
	}

return (n * factorial(n - 1));

}
