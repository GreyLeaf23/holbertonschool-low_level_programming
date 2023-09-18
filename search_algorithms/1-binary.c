#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @left: left index of array to print from
 * @right: right index of array to print to
 */
void print_array(int *array, int left, int right)
{
	int i;/*Index variable*/

	printf("Searching in array: ");/*Start printing the message*/

	/*Iterate over the array within the given bounds*/
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);/*Print each element followed by a comma*/
	printf("%d\n", array[i]);/*Print the last element followed by a newline*/
}

/**
 * binary_search - Searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;/*Initialize the left boundary*/
	int right = size - 1;/*Initialize the right boundary*/
	int mid;/*Variable for the middle index*/

	/*If the array is NULL, return -1*/
	if (!array)
		return (-1);

	/*While the search space is not empty*/
	while (left <= right)
	{
		/*Print the current search space*/
		print_array(array, left, right);

		/*Calculate the middle index*/
		mid = left + (right - left) / 2;

		/*If the middle element is less than the target, discard the left half*/
		if (array[mid] < value)
			left = mid + 1;
		/*If the middle element is greater than the target, discard the right half*/
		else if (array[mid] > value)
			right = mid - 1;
		/*If the middle element equals the target, return its index*/
		else
			return (mid);
	}

	/*If the target is not found after scanning the whole array, return -1*/
	return (-1);
}
