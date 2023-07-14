#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input, first dim.
 * @height: height input, second dim.
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height) /*Double pointer indicated by prototype.*/
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0) /*Two 'if statements' using pipeline.*/
		return (NULL);

	/*Allocate space for height.*/
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	/*Allocate space for width inside of a loop.*/
	for (i = 0; i < height; i++)
	{
			grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/*Free previously allocated memory*/
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	/*Set all elements to 0.*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
