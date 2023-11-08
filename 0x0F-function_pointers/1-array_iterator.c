#include "function_pointers.h"

/**
 * array_iterator - prints a array_iterator
 * @array: les element to edit
 * @size: size to array
 * @action: pointer to element to edit
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	if (!array || !action)
		return;
	i = 0;
	while (i < size)
		action(array[i++]);
}
