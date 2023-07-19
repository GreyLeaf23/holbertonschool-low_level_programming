#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute each element of an array.
 * @array: list of elements.
 * @size: int amount.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int woof;

	if (array != NULL && action != NULL)
	{
		for (woof = 0; woof < size; woof++)
		{
			(*action)(array[woof]);
		}
	}

}
