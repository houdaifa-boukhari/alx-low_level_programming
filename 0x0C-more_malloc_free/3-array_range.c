#include "main.h"


/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximent range
 *
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int	i;
	int	*range;

	i = max - min + 1;
	if (min > max)
		return (NULL);
	range = (int *) malloc(sizeof(int) * i);
	if (!range)
		return (NULL);
	i = 0;
	while (min <= max)
		range[i++] = min++;
	return (range);
}
