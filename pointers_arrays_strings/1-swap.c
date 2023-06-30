#include "main.h"

/**
 * swap_int - Function that swaps values of two integers.
 * @a: Represent an integer.
 * @b: Represent an integer.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;


}
