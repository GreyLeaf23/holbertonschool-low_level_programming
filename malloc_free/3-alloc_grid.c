#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - allocating pointers to 2D array.
 * @height: one dimension of grid.
 * @width: second dimension of grid.
 *
 * Return: complete grid.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0) /*You can make two if statements in one*/
	{
		return (NULL);
	}

grid = (int **) malloc(height * sizeof(int *)); /*malloc space for height*/

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	/*malloc space for width, INSIDE of a loop!*/

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

	/* */

	if (grid[i] == NULL)
	{

	for (j = 0; j < i; j++)
	{
		free(grid[i]);
	}

	free(grid);

	}

	}

	return (grid);
}
