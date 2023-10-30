#include "main.h"

/**
* free_grid - free allocation array 2 dimensional
* @height: height of the grid
* @grid: array 2 dimenstion
*
* Return: void.
*/

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	if (!grid)
		return;
	while (i < height)
	{
		if (grid[i])
			free(grid[i]);
		i++;
	}
	free(grid);
}
