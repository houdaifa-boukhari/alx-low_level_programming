#include "main.h"

/**
* **alloc_grid - allocation array 2 dimensional
* @width: width of the grid
* @height: height of the grid
*
* Return: pointer to 2 dimensional array.
*/

int **alloc_grid(int width, int height)
{
	int **tab;
	int i;
	int j;

	i = 0;
	j = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	tab = (int **)malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (NULL);
	while (i < height)
	{
		tab[i] = (int *)malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			while (j < i)
			{
				free(tab[j]);
				j++;
			}
			free(tab);
			return (NULL);
		}
		bzero(tab[i], sizeof(int) * width);
		i++;
	}
	return (tab);
}
