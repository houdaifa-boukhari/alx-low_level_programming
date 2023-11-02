#include "main.h"

/**
 * _calloc - allocate memory in new string
 * @nmemb: number the element
 * @size: the size of the memory to allocate
 *
 * Return: pointto by string.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void	*memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = (void *)malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	memset(memory, 0, size * nmemb);
	return (memory);
}
