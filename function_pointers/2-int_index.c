#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: list of elemnets.
 * @size: size of int.
 * @cmp: function pointer.
 *
 * Return: -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int woof; /*'size' variable*/

	if (array != NULL && cmp != NULL) /*Check 'array' and 'cmp'*/
	{
		if (size <= 0) /*Check 'size'*/
		{
			return (-1);
		}

			for (woof = 0; woof < size; woof++) /*Define 'woof'*/
			{
				if ((*cmp)(array[woof]) != 0) /*Check 'function pointer'.*/
					return (woof);
			}
	}

return (-1);

}
