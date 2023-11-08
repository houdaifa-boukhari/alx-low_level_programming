#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
}
