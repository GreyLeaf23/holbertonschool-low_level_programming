#include "search_algos.h"

/**
 * linear_search - straight-forward search algorithms.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in 'array'.
 * @value: value to search for.
 *
 * Return: value found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1); /*Return -1 if array is NULL*/
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{

    /*Print the current value being checked*/
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			return (i); /*Return the index if value is found.*/
		}
	}

	return (-1); /*Return -1 if value is not found in array.*/
}
