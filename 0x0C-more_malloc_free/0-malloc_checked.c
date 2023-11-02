#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p1;

	p1 = (void *)malloc(b);
	if (!p1)
		exit(98);
	return ((void *)p1);
}
